
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionSideEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionHistoryPositionSideEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionSideEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionSideEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionHistoryPositionSideEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionSideEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionSideEnum || defined(INCLUDE_DXPositionSideEnum))
#define DXPositionSideEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXPositionSideEnum : PSBaseEnum
@property (readonly, class, strong) DXPositionSideEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXPositionSideEnum *ALL NS_SWIFT_NAME(ALL);
@property (readonly, class, strong) DXPositionSideEnum *BUY NS_SWIFT_NAME(BUY);
@property (readonly, class, strong) DXPositionSideEnum *SELL NS_SWIFT_NAME(SELL);

+ (DXPositionSideEnum *)UNDEFINED;

+ (DXPositionSideEnum *)ALL;

+ (DXPositionSideEnum *)BUY;

+ (DXPositionSideEnum *)SELL;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXPositionSideEnum *)change;

- (DXPositionSideEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXPositionSideEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXPositionSideEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXPositionSideEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXPositionSideEnum)

inline DXPositionSideEnum *DXPositionSideEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionSideEnum *DXPositionSideEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionSideEnum, UNDEFINED, DXPositionSideEnum *)

inline DXPositionSideEnum *DXPositionSideEnum_get_ALL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionSideEnum *DXPositionSideEnum_ALL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionSideEnum, ALL, DXPositionSideEnum *)

inline DXPositionSideEnum *DXPositionSideEnum_get_BUY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionSideEnum *DXPositionSideEnum_BUY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionSideEnum, BUY, DXPositionSideEnum *)

inline DXPositionSideEnum *DXPositionSideEnum_get_SELL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionSideEnum *DXPositionSideEnum_SELL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionSideEnum, SELL, DXPositionSideEnum *)

FOUNDATION_EXPORT void DXPositionSideEnum_initWithNSString_withInt_(DXPositionSideEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXPositionSideEnum *new_DXPositionSideEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionSideEnum *create_DXPositionSideEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXPositionSideEnum_init(DXPositionSideEnum *self);

FOUNDATION_EXPORT DXPositionSideEnum *new_DXPositionSideEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionSideEnum *create_DXPositionSideEnum_init(void);

FOUNDATION_EXPORT DXPositionSideEnum *DXPositionSideEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXPositionSideEnum *DXPositionSideEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXPositionSideEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionSideEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionHistoryPositionSideEnum DXPositionSideEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionSideEnum")
