
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXTokenVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor || defined(INCLUDE_DXTokenVisitor))
#define DXTokenVisitor_

@protocol DXTokenVisitor < JavaObject >

- (id)getEmptyValue;

- (id)getResult;

- (void)visitOperationWithInt:(jint)opNum;

- (void)visitVariableWithInt:(jint)varNum;

- (void)visitValueWithLong:(jlong)value;

@end

J2OBJC_EMPTY_STATIC_INIT(DXTokenVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXTokenVisitor)

#define ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor DXTokenVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor")
