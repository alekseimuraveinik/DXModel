
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderMarketTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderMarketTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderMarketTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderMarketTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderMarketTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderMarketTypeEnum || defined(INCLUDE_DXMarketTypeEnum))
#define DXMarketTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXMarketTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXMarketTypeEnum *DEFAULT NS_SWIFT_NAME(DEFAULT);
@property (readonly, class, strong) DXMarketTypeEnum *AT_BEST NS_SWIFT_NAME(AT_BEST);

+ (DXMarketTypeEnum *)DEFAULT;

+ (DXMarketTypeEnum *)AT_BEST;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXMarketTypeEnum *)change;

- (DXMarketTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXMarketTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXMarketTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXMarketTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXMarketTypeEnum)

inline DXMarketTypeEnum *DXMarketTypeEnum_get_DEFAULT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketTypeEnum *DXMarketTypeEnum_DEFAULT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketTypeEnum, DEFAULT, DXMarketTypeEnum *)

inline DXMarketTypeEnum *DXMarketTypeEnum_get_AT_BEST(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketTypeEnum *DXMarketTypeEnum_AT_BEST;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketTypeEnum, AT_BEST, DXMarketTypeEnum *)

FOUNDATION_EXPORT void DXMarketTypeEnum_initWithNSString_withInt_(DXMarketTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXMarketTypeEnum *new_DXMarketTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketTypeEnum *create_DXMarketTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXMarketTypeEnum_init(DXMarketTypeEnum *self);

FOUNDATION_EXPORT DXMarketTypeEnum *new_DXMarketTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketTypeEnum *create_DXMarketTypeEnum_init(void);

FOUNDATION_EXPORT DXMarketTypeEnum *DXMarketTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXMarketTypeEnum *DXMarketTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXMarketTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderMarketTypeEnum DXMarketTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderMarketTypeEnum")
