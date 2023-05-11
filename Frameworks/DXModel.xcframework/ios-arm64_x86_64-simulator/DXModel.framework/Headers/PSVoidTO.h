
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilVoidTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilVoidTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilVoidTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilVoidTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilVoidTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSVoidTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilVoidTO || defined(INCLUDE_PSVoidTO))
#define PSVoidTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface PSVoidTO : PSBaseEnum
@property (readonly, class, strong) PSVoidTO *VALUE NS_SWIFT_NAME(VALUE);

+ (PSVoidTO *)VALUE;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (PSVoidTO *)change;

- (PSVoidTO *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (PSVoidTO *)findByOrdinalWithInt:(jint)ordinal;

+ (PSVoidTO *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (PSVoidTO *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(PSVoidTO)

inline PSVoidTO *PSVoidTO_get_VALUE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSVoidTO *PSVoidTO_VALUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSVoidTO, VALUE, PSVoidTO *)

FOUNDATION_EXPORT void PSVoidTO_initWithNSString_withInt_(PSVoidTO *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT PSVoidTO *new_PSVoidTO_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSVoidTO *create_PSVoidTO_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void PSVoidTO_init(PSVoidTO *self);

FOUNDATION_EXPORT PSVoidTO *new_PSVoidTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSVoidTO *create_PSVoidTO_init(void);

FOUNDATION_EXPORT PSVoidTO *PSVoidTO_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PSVoidTO *PSVoidTO_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> PSVoidTO_values(void);

J2OBJC_TYPE_LITERAL_HEADER(PSVoidTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilVoidTO PSVoidTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilVoidTO")
