/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _StressTestClass9_h
#define _StressTestClass9_h

#include <MI.h>
#include "StressTestClass8.h"
#include "StressTestClass0.h"
#include "StressTestClass1.h"
#include "StressTestClass2.h"
#include "StressTestClass3.h"
#include "StressTestClass4.h"
#include "StressTestClass5.h"
#include "StressTestClass6.h"
#include "StressTestClass7.h"

/*
**==============================================================================
**
** StressTestClass9 [StressTestClass9]
**
** Keys:
**    someKey0
**
**==============================================================================
*/

typedef struct _StressTestClass9 /* extends StressTestClass8 */
{
    MI_Instance __instance;
    /* StressTestClass0 properties */
    /*KEY*/ MI_ConstUint32Field someKey0;
    /* StressTestClass1 properties */
    StressTestClass0_ConstRef embeddedInstance0;
    /* StressTestClass2 properties */
    StressTestClass1_ConstRef embeddedInstance1;
    /* StressTestClass3 properties */
    StressTestClass2_ConstRef embeddedInstance2;
    /* StressTestClass4 properties */
    StressTestClass3_ConstRef embeddedInstance3;
    /* StressTestClass5 properties */
    StressTestClass4_ConstRef embeddedInstance4;
    /* StressTestClass6 properties */
    StressTestClass5_ConstRef embeddedInstance5;
    /* StressTestClass7 properties */
    StressTestClass6_ConstRef embeddedInstance6;
    /* StressTestClass8 properties */
    StressTestClass7_ConstRef embeddedInstance7;
    /* StressTestClass9 properties */
    StressTestClass8_ConstRef embeddedInstance8;
}
StressTestClass9;

typedef struct _StressTestClass9_Ref
{
    StressTestClass9* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
StressTestClass9_Ref;

typedef struct _StressTestClass9_ConstRef
{
    MI_CONST StressTestClass9* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
StressTestClass9_ConstRef;

typedef struct _StressTestClass9_Array
{
    struct _StressTestClass9** data;
    MI_Uint32 size;
}
StressTestClass9_Array;

typedef struct _StressTestClass9_ConstArray
{
    struct _StressTestClass9 MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
StressTestClass9_ConstArray;

typedef struct _StressTestClass9_ArrayRef
{
    StressTestClass9_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
StressTestClass9_ArrayRef;

typedef struct _StressTestClass9_ConstArrayRef
{
    StressTestClass9_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
StressTestClass9_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl StressTestClass9_rtti;

MI_INLINE MI_Result MI_CALL StressTestClass9_Construct(
    _Out_ StressTestClass9* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructInstance(context, &StressTestClass9_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clone(
    _In_ const StressTestClass9* self,
    _Outptr_ StressTestClass9** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL StressTestClass9_IsA(
    _In_ const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &StressTestClass9_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Destruct(_Inout_ StressTestClass9* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Delete(_Inout_ StressTestClass9* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Post(
    _In_ const StressTestClass9* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_someKey0(
    _Inout_ StressTestClass9* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->someKey0)->value = x;
    ((MI_Uint32Field*)&self->someKey0)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_someKey0(
    _Inout_ StressTestClass9* self)
{
    memset((void*)&self->someKey0, 0, sizeof(self->someKey0));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_embeddedInstance0(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass0* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_SetPtr_embeddedInstance0(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass0* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_embeddedInstance0(
    _Inout_ StressTestClass9* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_embeddedInstance1(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass1* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_SetPtr_embeddedInstance1(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass1* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_embeddedInstance1(
    _Inout_ StressTestClass9* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_embeddedInstance2(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass2* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_SetPtr_embeddedInstance2(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass2* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_embeddedInstance2(
    _Inout_ StressTestClass9* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_embeddedInstance3(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass3* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_SetPtr_embeddedInstance3(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass3* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_embeddedInstance3(
    _Inout_ StressTestClass9* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_embeddedInstance4(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass4* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_SetPtr_embeddedInstance4(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass4* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_embeddedInstance4(
    _Inout_ StressTestClass9* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_embeddedInstance5(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass5* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_SetPtr_embeddedInstance5(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass5* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_embeddedInstance5(
    _Inout_ StressTestClass9* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_embeddedInstance6(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass6* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_SetPtr_embeddedInstance6(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass6* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_embeddedInstance6(
    _Inout_ StressTestClass9* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_embeddedInstance7(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass7* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_SetPtr_embeddedInstance7(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass7* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_embeddedInstance7(
    _Inout_ StressTestClass9* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Set_embeddedInstance8(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass8* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_SetPtr_embeddedInstance8(
    _Inout_ StressTestClass9* self,
    _In_ const StressTestClass8* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL StressTestClass9_Clear_embeddedInstance8(
    _Inout_ StressTestClass9* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

/*
**==============================================================================
**
** StressTestClass9 provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _StressTestClass9_Self StressTestClass9_Self;

MI_EXTERN_C void MI_CALL StressTestClass9_Load(
    _Outptr_result_maybenull_ StressTestClass9_Self** self,
    _In_opt_ MI_Module_Self* selfModule,
    _In_ MI_Context* context);

MI_EXTERN_C void MI_CALL StressTestClass9_Unload(
    _In_opt_ StressTestClass9_Self* self,
    _In_ MI_Context* context);

MI_EXTERN_C void MI_CALL StressTestClass9_EnumerateInstances(
    _In_opt_ StressTestClass9_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_ const MI_PropertySet* propertySet,
    _In_ MI_Boolean keysOnly,
    _In_opt_ const MI_Filter* filter);

MI_EXTERN_C void MI_CALL StressTestClass9_GetInstance(
    _In_opt_ StressTestClass9_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const StressTestClass9* instanceName,
    _In_opt_ const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL StressTestClass9_CreateInstance(
    _In_opt_ StressTestClass9_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const StressTestClass9* newInstance);

MI_EXTERN_C void MI_CALL StressTestClass9_ModifyInstance(
    _In_opt_ StressTestClass9_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const StressTestClass9* modifiedInstance,
    _In_opt_ const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL StressTestClass9_DeleteInstance(
    _In_opt_ StressTestClass9_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const StressTestClass9* instanceName);


#endif /* _StressTestClass9_h */
