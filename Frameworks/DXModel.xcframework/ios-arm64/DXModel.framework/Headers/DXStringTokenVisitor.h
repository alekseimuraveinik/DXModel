
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationStringTokenVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationStringTokenVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationStringTokenVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationStringTokenVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationStringTokenVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStringTokenVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationStringTokenVisitor || defined(INCLUDE_DXStringTokenVisitor))
#define DXStringTokenVisitor_

#define RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor 1
#define INCLUDE_DXTokenVisitor 1
#include "DXTokenVisitor.h"

@class IOSDoubleArray;
@class JavaLangStringBuilder;
@protocol DXDecimalFormatter;

@interface DXStringTokenVisitor : NSObject < DXTokenVisitor >

#pragma mark Public

- (instancetype __nonnull)initWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                                 withDXDecimalFormatter:(id<DXDecimalFormatter>)decimalFormatter
                                        withDoubleArray:(IOSDoubleArray *)params
                                                withInt:(jint)prec;

- (id)getEmptyValue;

- (id)getResult;

- (void)visitOperationWithInt:(jint)opNum;

- (void)visitValueWithLong:(jlong)value;

- (void)visitVariableWithInt:(jint)varNum;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXStringTokenVisitor)

FOUNDATION_EXPORT void DXStringTokenVisitor_initWithJavaLangStringBuilder_withDXDecimalFormatter_withDoubleArray_withInt_(DXStringTokenVisitor *self, JavaLangStringBuilder *sb, id<DXDecimalFormatter> decimalFormatter, IOSDoubleArray *params, jint prec);

FOUNDATION_EXPORT DXStringTokenVisitor *new_DXStringTokenVisitor_initWithJavaLangStringBuilder_withDXDecimalFormatter_withDoubleArray_withInt_(JavaLangStringBuilder *sb, id<DXDecimalFormatter> decimalFormatter, IOSDoubleArray *params, jint prec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStringTokenVisitor *create_DXStringTokenVisitor_initWithJavaLangStringBuilder_withDXDecimalFormatter_withDoubleArray_withInt_(JavaLangStringBuilder *sb, id<DXDecimalFormatter> decimalFormatter, IOSDoubleArray *params, jint prec);

J2OBJC_TYPE_LITERAL_HEADER(DXStringTokenVisitor)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderValidationStringTokenVisitor DXStringTokenVisitor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationStringTokenVisitor")
