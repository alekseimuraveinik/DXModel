
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteCandlePriceEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteCandlePriceEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteCandlePriceEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteCandlePriceEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteCandlePriceEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCandlePriceEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteCandlePriceEnum || defined(INCLUDE_DXCandlePriceEnum))
#define DXCandlePriceEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXCandlePriceEnum : PSBaseEnum
@property (readonly, class, strong) DXCandlePriceEnum *LAST NS_SWIFT_NAME(LAST);
@property (readonly, class, strong) DXCandlePriceEnum *BID NS_SWIFT_NAME(BID);
@property (readonly, class, strong) DXCandlePriceEnum *ASK NS_SWIFT_NAME(ASK);
@property (readonly, class, strong) DXCandlePriceEnum *MARK NS_SWIFT_NAME(MARK);
@property (readonly, class, strong) DXCandlePriceEnum *SETTLEMENT NS_SWIFT_NAME(SETTLEMENT);

+ (DXCandlePriceEnum *)LAST;

+ (DXCandlePriceEnum *)BID;

+ (DXCandlePriceEnum *)ASK;

+ (DXCandlePriceEnum *)MARK;

+ (DXCandlePriceEnum *)SETTLEMENT;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXCandlePriceEnum *)change;

- (DXCandlePriceEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXCandlePriceEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXCandlePriceEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXCandlePriceEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXCandlePriceEnum)

inline DXCandlePriceEnum *DXCandlePriceEnum_get_LAST(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCandlePriceEnum *DXCandlePriceEnum_LAST;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCandlePriceEnum, LAST, DXCandlePriceEnum *)

inline DXCandlePriceEnum *DXCandlePriceEnum_get_BID(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCandlePriceEnum *DXCandlePriceEnum_BID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCandlePriceEnum, BID, DXCandlePriceEnum *)

inline DXCandlePriceEnum *DXCandlePriceEnum_get_ASK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCandlePriceEnum *DXCandlePriceEnum_ASK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCandlePriceEnum, ASK, DXCandlePriceEnum *)

inline DXCandlePriceEnum *DXCandlePriceEnum_get_MARK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCandlePriceEnum *DXCandlePriceEnum_MARK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCandlePriceEnum, MARK, DXCandlePriceEnum *)

inline DXCandlePriceEnum *DXCandlePriceEnum_get_SETTLEMENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCandlePriceEnum *DXCandlePriceEnum_SETTLEMENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCandlePriceEnum, SETTLEMENT, DXCandlePriceEnum *)

FOUNDATION_EXPORT void DXCandlePriceEnum_initWithNSString_withInt_(DXCandlePriceEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXCandlePriceEnum *new_DXCandlePriceEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCandlePriceEnum *create_DXCandlePriceEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXCandlePriceEnum_init(DXCandlePriceEnum *self);

FOUNDATION_EXPORT DXCandlePriceEnum *new_DXCandlePriceEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCandlePriceEnum *create_DXCandlePriceEnum_init(void);

FOUNDATION_EXPORT DXCandlePriceEnum *DXCandlePriceEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXCandlePriceEnum *DXCandlePriceEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXCandlePriceEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCandlePriceEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteCandlePriceEnum DXCandlePriceEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteCandlePriceEnum")
