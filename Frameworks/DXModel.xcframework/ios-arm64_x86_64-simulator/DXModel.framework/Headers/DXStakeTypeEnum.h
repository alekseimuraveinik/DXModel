
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountStakeTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountStakeTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountStakeTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountStakeTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountStakeTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStakeTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountStakeTypeEnum || defined(INCLUDE_DXStakeTypeEnum))
#define DXStakeTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXStakeTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXStakeTypeEnum *DEFAULT NS_SWIFT_NAME(DEFAULT);
@property (readonly, class, strong) DXStakeTypeEnum *SPREAD_BET NS_SWIFT_NAME(SPREAD_BET);
@property (readonly, class, strong) DXStakeTypeEnum *UNKNOWN NS_SWIFT_NAME(UNKNOWN);

+ (DXStakeTypeEnum *)DEFAULT;

+ (DXStakeTypeEnum *)SPREAD_BET;

+ (DXStakeTypeEnum *)UNKNOWN;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXStakeTypeEnum *)change;

- (DXStakeTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXStakeTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXStakeTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXStakeTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXStakeTypeEnum)

inline DXStakeTypeEnum *DXStakeTypeEnum_get_DEFAULT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStakeTypeEnum *DXStakeTypeEnum_DEFAULT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStakeTypeEnum, DEFAULT, DXStakeTypeEnum *)

inline DXStakeTypeEnum *DXStakeTypeEnum_get_SPREAD_BET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStakeTypeEnum *DXStakeTypeEnum_SPREAD_BET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStakeTypeEnum, SPREAD_BET, DXStakeTypeEnum *)

inline DXStakeTypeEnum *DXStakeTypeEnum_get_UNKNOWN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStakeTypeEnum *DXStakeTypeEnum_UNKNOWN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStakeTypeEnum, UNKNOWN, DXStakeTypeEnum *)

FOUNDATION_EXPORT void DXStakeTypeEnum_initWithNSString_withInt_(DXStakeTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXStakeTypeEnum *new_DXStakeTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStakeTypeEnum *create_DXStakeTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXStakeTypeEnum_init(DXStakeTypeEnum *self);

FOUNDATION_EXPORT DXStakeTypeEnum *new_DXStakeTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStakeTypeEnum *create_DXStakeTypeEnum_init(void);

FOUNDATION_EXPORT DXStakeTypeEnum *DXStakeTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXStakeTypeEnum *DXStakeTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXStakeTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStakeTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountStakeTypeEnum DXStakeTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountStakeTypeEnum")
