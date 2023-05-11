
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTypeEnum")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilErrorTypeEnum
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilErrorTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSErrorTypeEnum_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTypeEnum || defined(INCLUDE_PSErrorTypeEnum))
#define PSErrorTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface PSErrorTypeEnum : PSBaseEnum
@property (readonly, class, strong) PSErrorTypeEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) PSErrorTypeEnum *ERROR NS_SWIFT_NAME(ERROR);
@property (readonly, class, strong) PSErrorTypeEnum *WARNING NS_SWIFT_NAME(WARNING);
@property (readonly, class, strong) PSErrorTypeEnum *INFO NS_SWIFT_NAME(INFO);

+ (PSErrorTypeEnum *)UNDEFINED;

+ (PSErrorTypeEnum *)ERROR;

+ (PSErrorTypeEnum *)WARNING;

+ (PSErrorTypeEnum *)INFO;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (PSErrorTypeEnum *)change;

- (PSErrorTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (PSErrorTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (PSErrorTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (PSErrorTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(PSErrorTypeEnum)

inline PSErrorTypeEnum *PSErrorTypeEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSErrorTypeEnum *PSErrorTypeEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSErrorTypeEnum, UNDEFINED, PSErrorTypeEnum *)

inline PSErrorTypeEnum *PSErrorTypeEnum_get_ERROR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSErrorTypeEnum *PSErrorTypeEnum_ERROR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSErrorTypeEnum, ERROR, PSErrorTypeEnum *)

inline PSErrorTypeEnum *PSErrorTypeEnum_get_WARNING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSErrorTypeEnum *PSErrorTypeEnum_WARNING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSErrorTypeEnum, WARNING, PSErrorTypeEnum *)

inline PSErrorTypeEnum *PSErrorTypeEnum_get_INFO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSErrorTypeEnum *PSErrorTypeEnum_INFO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSErrorTypeEnum, INFO, PSErrorTypeEnum *)

FOUNDATION_EXPORT void PSErrorTypeEnum_initWithNSString_withInt_(PSErrorTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT PSErrorTypeEnum *new_PSErrorTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSErrorTypeEnum *create_PSErrorTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void PSErrorTypeEnum_init(PSErrorTypeEnum *self);

FOUNDATION_EXPORT PSErrorTypeEnum *new_PSErrorTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSErrorTypeEnum *create_PSErrorTypeEnum_init(void);

FOUNDATION_EXPORT PSErrorTypeEnum *PSErrorTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PSErrorTypeEnum *PSErrorTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> PSErrorTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(PSErrorTypeEnum)

@compatibility_alias ComDevexpertsPipestoneApiUtilErrorTypeEnum PSErrorTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTypeEnum")
