/*
#############################################################################################
# BlackSquad (1.0.10246.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/
/*
// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Yaw;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Roll;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};
*/

struct FRotator
{
    INT Pitch, Yaw, Roll;
 
    FRotator() {}
 
    FRotator( INT Pitch, INT Yaw, INT Roll )
    {
        this->Pitch = Pitch;
        this->Yaw = Yaw;
        this->Roll = Roll;
    }
 
    FRotator operator - () { return FRotator( -Pitch, -Yaw, -Roll ); }
 
    FRotator operator + ( FRotator r ) { return FRotator( Pitch + r.Pitch, Yaw + r.Yaw, Roll + r.Roll ); }
    FRotator operator - ( FRotator r ) { return FRotator( Pitch - r.Pitch, Yaw - r.Yaw, Roll - r.Roll ); }
    FRotator operator * ( FRotator r ) { return FRotator( Pitch * r.Pitch, Yaw * r.Yaw, Roll * r.Roll ); }
    FRotator operator / ( FRotator r ) { return FRotator( Pitch/ r.Pitch, Yaw / r.Yaw, Roll / r.Roll ); }
 
    FRotator operator = ( FRotator r )
    {
        this->Pitch = r.Pitch;
        this->Yaw = r.Yaw;
        this->Roll = r.Roll;
 
        return *this;
    }
 
    FRotator operator += ( FRotator r )
    {
        this->Pitch += r.Pitch;
        this->Yaw += r.Yaw;
        this->Roll += r.Roll;
 
        return *this;
    }
 
    FRotator operator -= ( FRotator r )
    {
        this->Pitch -= r.Pitch;
        this->Yaw -= r.Yaw;
        this->Roll -= r.Roll;
 
        return *this;
    }
 
    FRotator operator /= ( FRotator r )
    {
        this->Pitch /= r.Pitch;
        this->Yaw /= r.Yaw;
        this->Roll /= r.Roll;
 
        return *this;
    }
 
    FRotator operator *= ( FRotator r )
    {
        this->Pitch *= r.Pitch;
        this->Yaw *= r.Yaw;
        this->Roll *= r.Roll;
 
        return *this;
    }
 
    FRotator operator + ( FLOAT f ) { return FRotator( Pitch + f, Yaw + f, Roll + f ); }
    FRotator operator - ( FLOAT f ) { return FRotator( Pitch - f, Yaw - f, Roll - f ); }
    FRotator operator * ( FLOAT f ) { return FRotator( Pitch * f, Yaw * f, Roll * f ); }
    FRotator operator / ( FLOAT f ) { return FRotator( Pitch / f, Yaw / f, Roll / f ); }
 
    FRotator operator = ( FLOAT f )
    {
        this->Pitch = f;
        this->Yaw = f;
        this->Roll = f;
 
        return *this;
    }
 
    FRotator operator += ( FLOAT f )
    {
        this->Pitch += f;
        this->Yaw += f;
        this->Roll += f;
 
        return *this;
    }
 
    FRotator operator -= ( FLOAT f )
    {
        this->Pitch -= f;
        this->Yaw -= f;
        this->Roll -= f;
 
        return *this;
    }
 
    FRotator operator /= ( FLOAT f )
    {
        this->Pitch /= f;
        this->Yaw /= f;
        this->Roll /= f;
 
        return *this;
    }
 
    FRotator operator *= ( FLOAT f )
    {
        this->Pitch *= f;
        this->Yaw *= f;
        this->Roll *= f;
 
        return *this;
    }
 
    BOOL operator == ( FRotator r ) { return ( ( Pitch == r.Pitch ) && ( Yaw == r.Yaw ) && ( Roll == r.Roll ) ); }
    BOOL operator != ( FRotator r ) { return ( ( Pitch != r.Pitch ) || ( Yaw != r.Yaw ) || ( Roll != r.Roll ) ); }
 
    FLOAT operator [] ( INT i )
    {
        if( i == 0 )
            return Pitch;
        else if( i == 1 )
            return Yaw;
        else 
            return Roll;
    }
};
// ScriptStruct Core.Object.VectorWithFlag
// 0x0010
struct FVectorWithFlag
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFlag : 1;                                        		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Core.Object.dword
// 0x0004
struct Fdword
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000001001]              ( CPF_Edit | CPF_Native )
};

// ScriptStruct Core.Object.QWord
// 0x0008
struct FQWord
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000001001]              ( CPF_Edit | CPF_Native )
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000001001]              ( CPF_Edit | CPF_Native )
};

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                D;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Pointer
// 0x0004
struct FPointer
{
	int                                                Dummy;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Array_Mirror
// 0x000C
struct FArray_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayNum;                                         		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayMax;                                         		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.InlinePointerArray_Mirror
// 0x0010
struct FInlinePointerArray_Mirror
{
	struct FPointer                                    InlineData;                                       		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FArray_Mirror                               SecondaryData;                                    		// 0x0004 (0x000C) [0x0000000000000002]              ( CPF_Const )
};
/*
// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};
*/

struct FVector2D
{
    FLOAT X, Y;
 
    FVector2D() {}
 
    FVector2D( FLOAT X, FLOAT Y )
    {
        this->X = X;
        this->Y = Y;
    }
 
    FVector2D operator - () { return FVector2D( -X, -Y ); }
 
    FVector2D operator + ( FVector2D v ) { return FVector2D( X + v.X, Y + v.Y ); }
    FVector2D operator - ( FVector2D v ) { return FVector2D( X - v.X, Y - v.Y ); }
    FVector2D operator * ( FVector2D v ) { return FVector2D( X * v.X, Y * v.Y ); }
    FVector2D operator / ( FVector2D v ) { return FVector2D( X / v.X, Y / v.Y ); }
 
    FVector2D operator = ( FVector2D v )
    {
        this->X = v.X;
        this->Y = v.Y;
 
        return *this;
    }
 
    FVector2D operator += ( FVector2D v )
    {
        this->X += v.X;
        this->Y += v.Y;
 
        return *this;
    }
 
    FVector2D operator -= ( FVector2D v )
    {
        this->X -= v.X;
        this->Y -= v.Y;
 
        return *this;
    }
 
    FVector2D operator /= ( FVector2D v )
    {
        this->X /= v.X;
        this->Y /= v.Y;
 
        return *this;
    }
 
    FVector2D operator *= ( FVector2D v )
    {
        this->X *= v.X;
        this->Y *= v.Y;
 
        return *this;
    }
 
    FVector2D operator + ( FLOAT f ) { return FVector2D( X + f, Y + f ); }
    FVector2D operator - ( FLOAT f ) { return FVector2D( X - f, Y - f ); }
    FVector2D operator * ( FLOAT f ) { return FVector2D( X * f, Y * f ); }
    FVector2D operator / ( FLOAT f ) { return FVector2D( X / f, Y / f ); }
 
    FVector2D operator = ( FLOAT f )
    {
        this->X = f;
        this->Y = f;
 
        return *this;
    }
 
    FVector2D operator += ( FLOAT f )
    {
        this->X += f;
        this->Y += f;
 
        return *this;
    }
 
    FVector2D operator -= ( FLOAT f )
    {
        this->X -= f;
        this->Y -= f;
 
        return *this;
    }
 
    FVector2D operator /= ( FLOAT f )
    {
        this->X /= f;
        this->Y /= f;
 
        return *this;
    }
 
    FVector2D operator *= ( FLOAT f )
    {
        this->X *= f;
        this->Y *= f;
 
        return *this;
    }
 
    BOOL operator == ( FVector2D v ) { return ( ( X == v.X ) && ( Y == v.Y ) ); }
    BOOL operator != ( FVector2D v ) { return ( ( X != v.X ) || ( Y != v.Y ) ); }
 
    FLOAT operator [] ( INT i )
    {
        if( i == 0 )
            return X;
        else 
            return Y; 
    }
 
    FLOAT Length() { return sqrtf( X * X + Y * Y ); }
};
 
FLOAT Vector2DDotProduct( FVector2D* pV1, FVector2D* pV2 )
{
    return ( ( pV1->X * pV2->X ) + ( pV1->Y * pV2->Y ) );
}
 
FLOAT Vector2DLength( FVector2D* pV )
{
    return pV->Length();
}
 
FVector2D* Vector2DNormalize( FVector2D* pOut, FVector2D* pV )
{
    FLOAT Len = pV->Length(); 
 
    *pOut /= Len; 
 
    return pOut;
}
 
FVector2D* Vector2DSubtract( FVector2D* pOut, FVector2D* pV1, FVector2D* pV2 )
{
    *pOut = *pV1 - *pV2; 
 
    return pOut;
}
 
FVector2D* Vector2DScale( FVector2D* pOut, FVector2D* pV, FLOAT Scale )
{
    pOut->X = pV->X * Scale;
    pOut->Y = pV->Y * Scale;
 
    return pOut;
}
 
FVector2D* Vector2DMaximize( FVector2D* pOut, FVector2D* pV1, FVector2D* pV2 )
{
    pOut->X = pV1->X > pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y > pV2->Y ? pV1->Y : pV2->Y;
 
    return pOut;
}
 
FVector2D* Vector2DMinimize( FVector2D* pOut, FVector2D* pV1, FVector2D* pV2 )
{
    pOut->X = pV1->X < pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y < pV2->Y ? pV1->Y : pV2->Y;
 
    return pOut;
}
 
FVector2D* Vector2DAdd( FVector2D* pOut, FVector2D* pV1, FVector2D* pV2 )
{
    *pOut = *pV1 + *pV2;
 
    return pOut;
}
 
struct FVector
{
    FLOAT X, Y, Z;
 
    FVector() {}
 
    FVector( FLOAT X, FLOAT Y, FLOAT Z )
    {
        this->X = X;
        this->Y = Y;
        this->Z = Z;
    }
 
    FVector operator - () { return FVector( -X, -Y, -Z ); }
 
    FVector operator + ( FVector v ) { return FVector( X + v.X, Y + v.Y, Z + v.Z ); }
    FVector operator - ( FVector v ) { return FVector( X - v.X, Y - v.Y, Z - v.Z ); }
    FVector operator * ( FVector v ) { return FVector( X * v.X, Y * v.Y, Z * v.Z ); }
    FVector operator / ( FVector v ) { return FVector( X / v.X, Y / v.Y, Z / v.Z ); }
 
    FVector operator = ( FVector v )
    {
        this->X = v.X;
        this->Y = v.Y;
        this->Z = v.Z;
 
        return *this;
    }
 
    FVector operator += ( FVector v )
    {
        this->X += v.X;
        this->Y += v.Y;
        this->Z += v.Z;
 
        return *this;
    }
 
    FVector operator -= ( FVector v )
    {
        this->X -= v.X;
        this->Y -= v.Y;
        this->Z -= v.Z;
 
        return *this;
    }
 
    FVector operator /= ( FVector v )
    {
        this->X /= v.X;
        this->Y /= v.Y;
        this->Z /= v.Z;
 
        return *this;
    }
 
    FVector operator *= ( FVector v )
    {
        this->X *= v.X;
        this->Y *= v.Y;
        this->Z *= v.Z;
 
        return *this;
    }
 
    FVector operator + ( FLOAT f ) { return FVector( X + f, Y + f, Z + f ); }
    FVector operator - ( FLOAT f ) { return FVector( X - f, Y - f, Z - f ); }
    FVector operator * ( FLOAT f ) { return FVector( X * f, Y * f, Z * f ); }
    FVector operator / ( FLOAT f ) { return FVector( X / f, Y / f, Z / f ); }
 
    FVector operator = ( FLOAT f )
    {
        this->X = f;
        this->Y = f;
        this->Z = f;
 
        return *this;
    }
 
    FVector operator += ( FLOAT f )
    {
        this->X += f;
        this->Y += f;
        this->Z += f;
 
        return *this;
    }
 
    FVector operator -= ( FLOAT f )
    {
        this->X -= f;
        this->Y -= f;
        this->Z -= f;
 
        return *this;
    }
 
    FVector operator /= ( FLOAT f )
    {
        this->X /= f;
        this->Y /= f;
        this->Z /= f;
 
        return *this;
    }
 
    FVector operator *= ( FLOAT f )
    {
        this->X *= f;
        this->Y *= f;
        this->Z *= f;
 
        return *this;
    }
 
    BOOL operator == ( FVector v ) { return ( ( X == v.X ) && ( Y == v.Y ) && ( Z == v.Z ) ); }
    BOOL operator != ( FVector v ) { return ( ( X != v.X ) || ( Y != v.Y ) || ( Z != v.Z ) ); }
 
    FLOAT operator [] ( INT i )
    {
        if( i == 0 )
            return X;
        else if( i == 1 )
            return Y;
        else 
            return Z;
    }
 
    FLOAT Length() { return sqrtf( X * X + Y * Y + Z * Z ); }
};
 
FLOAT VectorDotProduct( FVector* pV1, FVector* pV2 )
{
    return ( ( pV1->X * pV2->X ) + ( pV1->Y * pV2->Y ) + ( pV1->Z * pV2->Z ) );
}
 
FLOAT VectorLength( FVector* pV )
{
    return pV->Length();
}
 
FVector* VectorNormalize( FVector* pOut, FVector* pV )
{
    FLOAT Len = pV->Length(); 
 
    *pOut /= Len; 
 
    return pOut;
}
 
FVector* VectorScale( FVector* pOut, FVector* pV, FLOAT Scale )
{
    pOut->X = pV->X * Scale;
    pOut->Y = pV->Y * Scale;
    pOut->Z = pV->Z * Scale;
 
    return pOut;
}
 
FVector* VectorSubtract( FVector* pOut, FVector* pV1, FVector* pV2 )
{
    *pOut = *pV1 - *pV2; 
 
    return pOut;
}
 
FVector* VectorMaximize( FVector* pOut, FVector* pV1, FVector* pV2 )
{
    pOut->X = pV1->X > pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y > pV2->Y ? pV1->Y : pV2->Y;
    pOut->Z = pV1->Z > pV2->Z ? pV1->Z : pV2->Z;
 
    return pOut;
}
 
FVector* VectorMinimize( FVector* pOut, FVector* pV1, FVector* pV2 )
{
    pOut->X = pV1->X < pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y < pV2->Y ? pV1->Y : pV2->Y;
    pOut->Z = pV1->Z < pV2->Z ? pV1->Z : pV2->Z;
 
    return pOut;
}
 
FVector* VectorAdd( FVector* pOut, FVector* pV1, FVector* pV2 )
{
    *pOut = *pV1 + *pV2;
 
    return pOut;
}
 
struct FVector4
{
    FLOAT X, Y, Z, W;
 
    FVector4() {}
 
    FVector4( FLOAT X, FLOAT Y, FLOAT Z, FLOAT W )
    {
        this->X = X;
        this->Y = Y;
        this->Z = Z;
        this->W = W;
    }
 
    FVector4 operator - () { return FVector4( -X, -Y, -Z, -W ); }
 
    FVector4 operator + ( FVector4 v ) { return FVector4( X + v.X, Y + v.Y, Z + v.Z, W + v.W ); } 
    FVector4 operator - ( FVector4 v ) { return FVector4( X - v.X, Y - v.Y, Z - v.Z, W - v.W ); }
    FVector4 operator * ( FVector4 v ) { return FVector4( X * v.X, Y * v.Y, Z * v.Z, W * v.W ); }
    FVector4 operator / ( FVector4 v ) { return FVector4( X / v.X, Y / v.Y, Z / v.Z, W / v.W ); }
 
    FVector4 operator = ( FVector4 v )    
    {
        this->X = v.X;
        this->Y = v.Y;
        this->Z = v.Z;
        this->W = v.W;
 
        return *this;
    }
 
    FVector4 operator += ( FVector4 v )
    {
        this->X += v.X;
        this->Y += v.Y;
        this->Z += v.Z;
        this->W += v.W;
 
        return *this;
    }
 
    FVector4 operator -= ( FVector4 v )
    {
        this->X -= v.X;
        this->Y -= v.Y;
        this->Z -= v.Z;
        this->W -= v.W;
 
        return *this;
    }
 
    FVector4 operator /= ( FVector4 v )
    {
        this->X /= v.X;
        this->Y /= v.Y;
        this->Z /= v.Z;
        this->W /= v.W;
 
        return *this;
    }
 
    FVector4 operator *= ( FVector4 v )
    {
        this->X *= v.X;
        this->Y *= v.Y;
        this->Z *= v.Z;
        this->W *= v.W;
 
        return *this;
    }
 
    FVector4 operator + ( FLOAT f ) { return FVector4( X + f, Y + f, Z + f, W + f ); }
    FVector4 operator - ( FLOAT f ) { return FVector4( X - f, Y - f, Z - f, W - f ); }
    FVector4 operator * ( FLOAT f ) { return FVector4( X * f, Y * f, Z * f, W * f ); }
    FVector4 operator / ( FLOAT f ) { return FVector4( X / f, Y / f, Z / f, W / f ); }
 
    FVector4 operator = ( FLOAT f )
    {
        this->X = f;
        this->Y = f;
        this->Z = f;
        this->W = f;
 
        return *this;
    }
 
    FVector4 operator += ( FLOAT f )
    {
        this->X += f;
        this->Y += f;
        this->Z += f;
        this->W += f;
 
        return *this;
    }
 
    FVector4 operator -= ( FLOAT f )
    {
        this->X -= f;
        this->Y -= f;
        this->Z -= f;
        this->W -= f;
 
        return *this;
    }
 
    FVector4 operator /= ( FLOAT f )
    {
        this->X /= f;
        this->Y /= f;
        this->Z /= f;
        this->W /= f;
 
        return *this;
    }
 
    FVector4 operator *= ( FLOAT f )
    {
        this->X *= f;
        this->Y *= f;
        this->Z *= f;
        this->W *= f;
 
        return *this;
    }
 
    BOOL operator == ( FVector4 v ) { return ( ( X == v.X ) && ( Y == v.Y ) && ( Z == v.Z ) && ( W == v.W ) ); }
    BOOL operator != ( FVector4 v ) { return ( ( X != v.X ) || ( Y != v.Y ) || ( Z != v.Z ) || ( W != v.W ) ); }
 
    FLOAT operator [] ( INT i )
    {
        if( i == 0 )
            return X;
        else if( i == 1 )
            return Y;
        else if( i == 2 )
            return Z;
        else
            return W;
    }
 
    FLOAT Length() { return sqrtf( X * X + Y * Y + Z * Z + W * W ); }
};
 
FLOAT Vector4DotProduct( FVector4* pV1, FVector4* pV2 )
{
    return ( ( pV1->X * pV2->X ) + ( pV1->Y * pV2->Y ) + ( pV1->Z * pV2->Z ) + ( pV1->W * pV2->W ) );
}
 
FLOAT Vector4Length( FVector4* pV )
{
    return pV->Length();
}
 
FVector4* Vector4Normalize( FVector4* pOut, FVector4* pV )
{
    FLOAT Len = pV->Length(); 
 
    *pOut /= Len; 
 
    return pOut;
}
 
FVector4* Vector4Scale( FVector4* pOut, FVector* pV, FLOAT Scale )
{
    pOut->X = pV->X * Scale;
    pOut->Y = pV->Y * Scale;
    pOut->Z = pV->Z * Scale;
 
    return pOut;
}
 
FVector4* Vector4Subtract( FVector4* pOut, FVector4* pV1, FVector4* pV2 )
{
    *pOut = *pV1 - *pV2; 
 
    return pOut;
}
 
FVector4* Vector4Maximize( FVector4* pOut, FVector4* pV1, FVector4* pV2 )
{
    pOut->X = pV1->X > pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y > pV2->Y ? pV1->Y : pV2->Y;
    pOut->Z = pV1->Z > pV2->Z ? pV1->Z : pV2->Z;
 
    return pOut;
}
 
FVector4* Vector4MinimiZe( FVector4* pOut, FVector4* pV1, FVector4* pV2 )
{
    pOut->X = pV1->X < pV2->X ? pV1->X : pV2->X;
    pOut->Y = pV1->Y < pV2->Y ? pV1->Y : pV2->Y;
    pOut->Z = pV1->Z < pV2->Z ? pV1->Z : pV2->Z;
 
    return pOut;
}
 
FVector4* Vector4Add( FVector4* pOut, FVector4* pV1, FVector4* pV2 )
{
    *pOut = *pV1 + *pV2;
 
    return pOut;
}

// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              G;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              B;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              A;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      G;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      R;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      A;                                                		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x001D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   OutVal;                                           		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ArriveTangent;                                    		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   LeaveTangent;                                     		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x001C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x000D
struct FInterpCurveVector2D
{
	TArray< struct FInterpCurvePointVector2D >         Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0011
struct FInterpCurvePointFloat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OutVal;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArriveTangent;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeaveTangent;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x000D
struct FInterpCurveFloat
{
	TArray< struct FInterpCurvePointFloat >            Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0029
struct FInterpCurvePointVector
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     OutVal;                                           		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ArriveTangent;                                    		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LeaveTangent;                                     		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveVector
// 0x000D
struct FInterpCurveVector
{
	TArray< struct FInterpCurvePointVector >           Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Plane
// 0x0004(0x0010 - 0x000C)
struct FPlane : FVector
{
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                           		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FPlane                                      YPlane;                                           		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FPlane                                      ZPlane;                                           		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FPlane                                      WPlane;                                           		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     BoxExtent;                                        		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              SphereRadius;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                               		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     v2;                                               		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.TAlphaBlend
// 0x0015
struct FTAlphaBlend
{
	float                                              AlphaIn;                                          		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AlphaOut;                                         		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AlphaTarget;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTime;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTimeToGo;                                    		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      BlendType;                                        		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.BoneAtom
// 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.OctreeElementId
// 0x0008
struct FOctreeElementId
{
	struct FPointer                                    Node;                                             		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ElementIndex;                                     		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.RenderCommandFence
// 0x0004
struct FRenderCommandFence
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.RawDistribution
// 0x0018
struct FRawDistribution
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Op;                                               		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableNumElements;                           		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableChunkSize;                             		// 0x0003 (0x0001) [0x0000000000000000]              
	TArray< float >                                    LookupTable;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LookupTableTimeScale;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LookupTableStartTime;                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointLinearColor
// 0x0035
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                OutVal;                                           		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ArriveTangent;                                    		// 0x0014 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                LeaveTangent;                                     		// 0x0024 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0034 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveLinearColor
// 0x000D
struct FInterpCurveLinearColor
{
	TArray< struct FInterpCurvePointLinearColor >      Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0041
struct FInterpCurvePointQuat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0004 (0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                           		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FQuat                                       ArriveTangent;                                    		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FQuat                                       LeaveTangent;                                     		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x000D
struct FInterpCurveQuat
{
	TArray< struct FInterpCurvePointQuat >             Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x004D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTwoVectors                                 OutVal;                                           		// 0x0004 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FTwoVectors                                 ArriveTangent;                                    		// 0x001C (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FTwoVectors                                 LeaveTangent;                                     		// 0x0034 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x000D
struct FInterpCurveTwoVectors
{
	TArray< struct FInterpCurvePointTwoVectors >       Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                              		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Max;                                              		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      IsValid;                                          		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOV;                                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.SHVector
// 0x0030
struct FSHVector
{
	float                                              V[ 0x9 ];                                         		// 0x0000 (0x0024) [0x0000000000000001]              ( CPF_Edit )
	float                                              Padding[ 0x3 ];                                   		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Core.Object.SHVectorRGB
// 0x0090
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                                		// 0x0000 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FSHVector                                   G;                                                		// 0x0030 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FSHVector                                   B;                                                		// 0x0060 (0x0030) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      W;                                                		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x000C
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayNum;                                         		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayMax;                                         		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// 0x0014
struct FFColorVertexBuffer_Mirror
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    VertexData;                                       		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                Data;                                             		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Stride;                                           		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumVertices;                                      		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x0004
struct FRenderCommandFence_Mirror
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0034
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                BulkDataFlags;                                    		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ElementCount;                                     		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                BulkDataOffsetInFile;                             		// 0x000C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                BulkDataSizeOnDisk;                               		// 0x0010 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedBulkDataFlags;                               		// 0x0014 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedElementCount;                                		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedBulkDataOffsetInFile;                        		// 0x001C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedBulkDataSizeOnDisk;                          		// 0x0020 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    BulkData;                                         		// 0x0024 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                LockStatus;                                       		// 0x0028 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    AttachedAr;                                       		// 0x002C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                bShouldFreeOnEmpty;                               		// 0x0030 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.BitArray_Mirror
// 0x001C
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                     		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                InlineData[ 0x4 ];                                		// 0x0004 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NumBits;                                          		// 0x0014 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                MaxBits;                                          		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.SparseArray_Mirror
// 0x0030
struct FSparseArray_Mirror
{
	TArray< int >                                      Elements;                                         		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FBitArray_Mirror                            AllocationFlags;                                  		// 0x000C (0x001C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                FirstFreeIndex;                                   		// 0x0028 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NumFreeIndices;                                   		// 0x002C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Set_Mirror
// 0x003C
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                         		// 0x0000 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                InlineHash;                                       		// 0x0030 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    Hash;                                             		// 0x0034 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                HashSize;                                         		// 0x0038 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x003C
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Map_Mirror
// 0x003C
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0004(0x001C - 0x0018)
struct FRawDistributionFloat : FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                     		// 0x0018 (0x0004) [0x0000000006080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
};

// ScriptStruct Core.DistributionFloat.MatineeRawDistributionFloat
// 0x0008(0x0024 - 0x001C)
struct FMatineeRawDistributionFloat : FRawDistributionFloat
{
	float                                              MatineeValue;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bInMatinee : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0004(0x001C - 0x0018)
struct FRawDistributionVector : FRawDistribution
{
	class UDistributionVector*                         Distribution;                                     		// 0x0018 (0x0004) [0x0000000006080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif