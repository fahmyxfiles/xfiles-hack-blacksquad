FColor MakeColor(int R, int G, int B, int A)
{
    FColor ReturnedColor;
    ReturnedColor.R = R;
    ReturnedColor.G = G;
    ReturnedColor.B = B;
    ReturnedColor.A = A;
    return ReturnedColor;
}

FColor MakeColor(int R, int G, int B, int A);
FColor MenuInner		= MakeColor(0,0,0,170);
FColor MenuOut			= MakeColor(238,201,0,200) ;
FColor Green			= MakeColor(0,255,0,255);
FColor Yellow			= MakeColor(255,255,0,255);
FColor Red				= MakeColor(255,0,0,255);
FColor Blue				= MakeColor(0,0,255,255);
FColor White			= MakeColor(255,255,255,255);
FColor Black			= MakeColor(0,0,0,255);



void DrawString( UCanvas* pCanvas, float X, float Y, FString String, float XScale, float YScale, FColor Colour )
{
    float OldCurX = pCanvas->CurX;
    float OldCurY = pCanvas->CurY;

    FColor OldColour = pCanvas->DrawColor;

    pCanvas->CurX = X;
    pCanvas->CurY = Y;
    pCanvas->DrawColor = Colour;

    pCanvas->DrawText( String, false, XScale, YScale, NULL );

    pCanvas->CurX = OldCurX;
    pCanvas->CurY = OldCurY;

    pCanvas->DrawColor = OldColour;
}
void ShadowedText(UCanvas* pCanvas, FString Text, FColor Color, float X, float Y, float ScaleX, float ScaleY)
{
	DrawString(pCanvas, X+0.1, Y	, Text, ScaleX, ScaleY, Black);
	DrawString(pCanvas, X-0.2, Y	, Text, ScaleX, ScaleY, Black);
	DrawString(pCanvas, X	 , Y+0.1, Text, ScaleX, ScaleY, Black);
	DrawString(pCanvas, X	 , Y-0.2, Text, ScaleX, ScaleY, Black);
	DrawString(pCanvas, X	 , Y	, Text, ScaleX, ScaleY, Color);
}

void DrawTextMenu(UCanvas* pCanvas, FString Text, FColor Color, float X, float Y)
{
	WCHAR Buffer[256];
	swprintf( Buffer, L"%s", Text);
	ShadowedText(pCanvas, Buffer, Color, X, Y, 1.0f, 1.0f);
}
void DrawItemMenu(UCanvas* pCanvas, FString Text, float X, float Y, int Item)
{
	WCHAR Buffer[256];
	swprintf( Buffer, L"%s", Text);
	FColor Color = Red;
	if(Item > 0)Color = Green;
	ShadowedText(pCanvas, Text, Color, X, Y, 1.0f, 1.0f);
}
float StrLen( UCanvas* pCanvas, FString iString )
{
    float X,Y;
    pCanvas->StrLen( iString, &X, &Y );
    return X;
}
float StrHeight( UCanvas* pCanvas, FString iString )
{
    float X,Y;
    pCanvas->StrLen( iString, &X, &Y );
    return Y;
}
UObject* GetInstanceOf ( UClass* Class )
{
    static UObject* ObjectInstance;

    ObjectInstance = NULL;

    for ( int i = 0; i < UObject::GObjObjects()->Count; ++i )
    {
        UObject* CheckObject = ( *UObject::GObjObjects() )( i );
			if ( CheckObject && CheckObject->IsA( Class ) )
			{
				if ( !strstr( CheckObject->GetFullName(), "Default" ) )
					ObjectInstance = CheckObject;
			}
    }

    return ObjectInstance;
};
void DrawCrossHair(UCanvas* pCanvas)
{
    pCanvas->Draw2DLine(pCanvas->ClipX/2 -15,pCanvas->ClipY/2, pCanvas->ClipX/2 +15 ,pCanvas->ClipY/2,Blue);
    pCanvas->Draw2DLine(pCanvas->ClipX/2 ,pCanvas->ClipY/2 -15, pCanvas->ClipX/2 ,pCanvas->ClipY/2 +15,Blue);
}
bool IsEnemy ( APawn* LocalPlayer, APawn* Target )
{
    return( LocalPlayer->PlayerReplicationInfo->Team != Target->PlayerReplicationInfo->Team );
}

float	ClipX;
float	ClipY;

FVector RotationToVector(FRotator R)
{
	FVector Vec;
	float fYaw = R.Yaw * CONST_UnrRotToRad;
	float fPitch = R.Pitch * CONST_UnrRotToRad;
	float CosPitch = pPC->Cos(fPitch);
	Vec.X = pPC->Cos(fYaw) * CosPitch;
	Vec.Y = pPC->Sin(fYaw) * CosPitch;
	Vec.Z = pPC->Sin(fPitch);

	return Vec;
}
FRotator VectorToRotation ( FVector vVector )
{
	FRotator rRotation;

	rRotation.Yaw = atan2 ( vVector.Y, vVector.X ) * CONST_RadToUnrRot;
	rRotation.Pitch = atan2 ( vVector.Z, sqrt ( ( vVector.X * vVector.X ) + ( vVector.Y * vVector.Y ) ) ) * CONST_RadToUnrRot;       
	rRotation.Roll = 0;

	return rRotation;
}
FVector GetBoneLocationByIndex(APawn* Target,int i)
{
	FName boneName = Target->Mesh->GetBoneName(i);
	return Target->Mesh->GetBoneLocation(boneName, 0);
}
float Size (FVector &v)
{
	return pPC->Sqrt(v.X*v.X + v.Y*v.Y + v.Z*v.Z);
}
void Normalize (FVector &v)
{
	float size = Size(v);

	if ( !size )
	{
		v.X = v.Y = v.Z = 1;
	}
	else
	{
		v.X /= size;
		v.Y /= size;
		v.Z /= size;
	}
}
void inline GetAxes (FRotator R, FVector &X, FVector &Y, FVector &Z)
{
	X = RotationToVector(R);
	Normalize(X);
	R.Yaw += 16384;
	FRotator R2 = R;
	R2.Pitch = 0.f;
	Y = RotationToVector(R2);
	Normalize(Y);
	Y.Z = 0.f;
	R.Yaw -= 16384;
	R.Pitch += 16384;
	Z = RotationToVector(R);
	Normalize(Z);
}
void LimitRotation(FRotator &CurrentRotation, //in
	FRotator& DesiredRotation, //in out
	int rotationLimit) //in
{    
	//Calculate the difference between the current rotation and desired rotation
	FRotator RotationDifference = Eng->Normalize((DesiredRotation - CurrentRotation)); 
	//Limit Yaw
	if(RotationDifference.Yaw < -rotationLimit)
		RotationDifference.Yaw = -rotationLimit;
	else if(RotationDifference.Yaw > rotationLimit)
		RotationDifference.Yaw = rotationLimit;
	//Limit Pitch
	if(RotationDifference.Pitch < -rotationLimit)
		RotationDifference.Pitch = -rotationLimit;
	else if(RotationDifference.Pitch > rotationLimit)
		RotationDifference.Pitch = rotationLimit;
	//Rolling is not used in APB therefore commented out
	//if(MoveCamera.Roll < -rotationLimit)
	//    MoveCamera.Roll = -rotationLimit;
	//else if(MoveCamera.Roll > rotationLimit)
	//    MoveCamera.Roll = rotationLimit;
	DesiredRotation = CurrentRotation + RotationDifference; //Set the desired rotation to the new limited values
}
BOOL IsVisible(FVector vStart, FVector vEnd, APawn* TargetPawn)
{
	FVector Extent(0,0,0);
	FVector HitLocation;
	FVector HitNormal;
	FTraceHitInfo HitInfo;

	APawn* Result = (APawn*)pPC->Trace(vEnd, vStart, 1, Extent, 0, &HitLocation, &HitNormal, &HitInfo);
	

	return(Result == TargetPawn);
	//return pLP->FastWallCheck(vEnd,vStart,Extent,true);
}  
bool WorldToScreen( FVector Location , FVector &Result)
{
	FVector AxisX, AxisY, AxisZ, Delta, Transformed, Loc;
	FRotator Rot;

	pPC->Pawn->eventGetActorEyesViewPoint( &Loc, &Rot );
	GetAxes( Rot , AxisX, AxisY, AxisZ );

	Delta = pPC->Subtract_VectorVector( Location, Loc );
	Transformed.X = pPC->Dot_VectorVector( Delta, AxisY );
	Transformed.Y = pPC->Dot_VectorVector( Delta, AxisZ );
	Transformed.Z = pPC->Dot_VectorVector( Delta, AxisX );

	if( Transformed.Z < 0.01f )
		return false;

	float FOVAngle = pPC->FOVAngle;

	Result.X = ( ClipX / 2.0f ) + Transformed.X * ( ( ClipX / 2.0f ) / pPC->Tan( FOVAngle * CONST_Pi / 360.0f ) ) / Transformed.Z;
	Result.Y = ( ClipY / 2.0f ) + -Transformed.Y * ( ( ClipX / 2.0f ) / pPC->Tan( FOVAngle * CONST_Pi / 360.0f ) ) / Transformed.Z;
	Result.Z = 0;
	return true;

}
/*

bool WorldToScreen( FVector Location,FVector &Result )
{
D3DXMATRIX pProjection, pView, pWorld;
D3DVIEWPORT9 g_ViewPort;
D3DXVECTOR3 vScreen;
D3DXVECTOR3 PlayerPos(Location.X,Location.Y,Location.Z);

npDevice->GetViewport(&g_ViewPort);
g_ViewPort.X = g_ViewPort.Y = 0;
g_ViewPort.MinZ = 0;
g_ViewPort.MaxZ = 1;

npDevice->GetVertexShaderConstantF( 0, pProjection, 4 );
npDevice->GetVertexShaderConstantF( 231, pView, 4 );
D3DXMatrixIdentity( &pWorld );

D3DXVec3Project(&vScreen, &PlayerPos, &g_ViewPort, &pProjection,&pView, &pWorld);

if (vScreen.z < 1.0f && vScreen.x > 0.0f && vScreen.y > 0.0f && vScreen.x < g_ViewPort.Width && vScreen.y < g_ViewPort.Height)
{
Result.X = vScreen.x;
Result.Y = vScreen.y;
Result.Z = vScreen.z;

return true; 
}

return false;
}

*/


float CalculateDistance(FVector v1,FVector v2)
{
	FVector v;
	v.X = v1.X - v2.X;
	v.Y = v1.Y - v2.Y;
	v.Z = v1.Z - v2.Z;
	return sqrt(v.X*v.X + v.Y*v.Y + v.Z*v.Z);
}

void AimAtVector(FVector TargetVec)
{
	FVector MyCameraLocation = pPC->PlayerCamera->Location; // Get cam location
	FRotator MyCameraRotation = pPC->PlayerCamera->Rotation;// Get cam rotation
	FVector AimVec =  TargetVec - MyCameraLocation ;// calcluate the aim vector        
	AimVec = Eng->Normal(AimVec); // normalize vector
	FRotator AimAtRot = VectorToRotation(AimVec);  // get rotator from vector
	LimitRotation(MyCameraRotation, AimAtRot, 1000); // Limit rotation of AimAtRot (value is modified by function)        
	pPC->Pawn->ClientSetRotation(AimAtRot);
}

APawn* GetAimPriority(AWorldInfo* WorldInfo)
{      

	APawn* NearestTarget = NULL;
	float NearDistance = 10000.0f;
	APawn* Target = (APawn*)WorldInfo->PawnList;
	while (Target != NULL)
	{
		if(Target){
			if(!Target->bDeleteMe && Target != pPC->Pawn && !Target->bHidden && Target->Health > 0)
			{
				if(Target->PlayerReplicationInfo && pPC->Pawn->PlayerReplicationInfo)
				{
					if (pPC->Pawn->PlayerReplicationInfo->Team && Target->PlayerReplicationInfo->Team != NULL){

						if(IsEnemy(pPC->Pawn,Target)){
							FName boneNameLocal = pPC->Pawn->Mesh->GetBoneName(2);
							FVector Start = pPC->Pawn->Mesh->GetBoneLocation(boneNameLocal, 0);
							FName boneNameTarget = Target->Mesh->GetBoneName(7);
							FVector End	= Target->Mesh->GetBoneLocation(boneNameTarget,0);
							if(IsVisible(Start,End,Target)){
								float pawnDist = CalculateDistance(pPC->Pawn->Location, Target->Location); //Calclate the distance between player and target
								if(pawnDist < NearDistance) // distance is smaller then the previously closest pawn, set this pawn to be the new closestTarget
								{
									NearestTarget = Target;
									NearDistance = pawnDist;
								}         
							}
						}
					}
				}
			}
		}
		Target = Target->NextPawn;
	}
	return NearestTarget;    
}

static wchar_t* charToWChar(const char* text)
{
    size_t size = strlen(text) + 1;
    wchar_t* wa = new wchar_t[size];
    mbstowcs(wa,text,size);
    return wa;
}