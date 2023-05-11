
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParametersEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParametersEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParametersEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParametersEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParametersEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXHeatMapParametersEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParametersEnum || defined(INCLUDE_DXHeatMapParametersEnum))
#define DXHeatMapParametersEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXHeatMapParametersEnum : PSBaseEnum
@property (readonly, class, strong) DXHeatMapParametersEnum *CHANGE NS_SWIFT_NAME(CHANGE);
@property (readonly, class, strong) DXHeatMapParametersEnum *VOLUME NS_SWIFT_NAME(VOLUME);
@property (readonly, class, strong) DXHeatMapParametersEnum *BID NS_SWIFT_NAME(BID);
@property (readonly, class, strong) DXHeatMapParametersEnum *ASK NS_SWIFT_NAME(ASK);
@property (readonly, class, strong) DXHeatMapParametersEnum *OPEN NS_SWIFT_NAME(OPEN);
@property (readonly, class, strong) DXHeatMapParametersEnum *CLOSE NS_SWIFT_NAME(CLOSE);
@property (readonly, class, strong) DXHeatMapParametersEnum *LAST NS_SWIFT_NAME(LAST);
@property (readonly, class, strong) DXHeatMapParametersEnum *BID_SIZE NS_SWIFT_NAME(BID_SIZE);
@property (readonly, class, strong) DXHeatMapParametersEnum *ASK_SIZE NS_SWIFT_NAME(ASK_SIZE);
@property (readonly, class, strong) DXHeatMapParametersEnum *LAST_TRADE_SIZE NS_SWIFT_NAME(LAST_TRADE_SIZE);
@property (readonly, class, strong) DXHeatMapParametersEnum *SPREAD NS_SWIFT_NAME(SPREAD);
@property (readonly, class, strong) DXHeatMapParametersEnum *PERCENT_SPREAD NS_SWIFT_NAME(PERCENT_SPREAD);

+ (DXHeatMapParametersEnum *)CHANGE;

+ (DXHeatMapParametersEnum *)VOLUME;

+ (DXHeatMapParametersEnum *)BID;

+ (DXHeatMapParametersEnum *)ASK;

+ (DXHeatMapParametersEnum *)OPEN;

+ (DXHeatMapParametersEnum *)CLOSE;

+ (DXHeatMapParametersEnum *)LAST;

+ (DXHeatMapParametersEnum *)BID_SIZE;

+ (DXHeatMapParametersEnum *)ASK_SIZE;

+ (DXHeatMapParametersEnum *)LAST_TRADE_SIZE;

+ (DXHeatMapParametersEnum *)SPREAD;

+ (DXHeatMapParametersEnum *)PERCENT_SPREAD;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXHeatMapParametersEnum *)change;

- (DXHeatMapParametersEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXHeatMapParametersEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXHeatMapParametersEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXHeatMapParametersEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXHeatMapParametersEnum)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_CHANGE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_CHANGE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, CHANGE, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_VOLUME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_VOLUME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, VOLUME, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_BID(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_BID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, BID, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_ASK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_ASK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, ASK, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_OPEN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_OPEN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, OPEN, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_CLOSE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_CLOSE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, CLOSE, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_LAST(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_LAST;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, LAST, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_BID_SIZE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_BID_SIZE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, BID_SIZE, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_ASK_SIZE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_ASK_SIZE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, ASK_SIZE, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_LAST_TRADE_SIZE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_LAST_TRADE_SIZE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, LAST_TRADE_SIZE, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_SPREAD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_SPREAD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, SPREAD, DXHeatMapParametersEnum *)

inline DXHeatMapParametersEnum *DXHeatMapParametersEnum_get_PERCENT_SPREAD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_PERCENT_SPREAD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParametersEnum, PERCENT_SPREAD, DXHeatMapParametersEnum *)

FOUNDATION_EXPORT void DXHeatMapParametersEnum_initWithNSString_withInt_(DXHeatMapParametersEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXHeatMapParametersEnum *new_DXHeatMapParametersEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXHeatMapParametersEnum *create_DXHeatMapParametersEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXHeatMapParametersEnum_init(DXHeatMapParametersEnum *self);

FOUNDATION_EXPORT DXHeatMapParametersEnum *new_DXHeatMapParametersEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXHeatMapParametersEnum *create_DXHeatMapParametersEnum_init(void);

FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXHeatMapParametersEnum *DXHeatMapParametersEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXHeatMapParametersEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXHeatMapParametersEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiHeatmapHeatMapParametersEnum DXHeatMapParametersEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParametersEnum")
