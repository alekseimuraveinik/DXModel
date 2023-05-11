
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthSideDataTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthSideDataTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthSideDataTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthSideDataTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthSideDataTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketDepthSideDataTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthSideDataTO || defined(INCLUDE_DXMarketDepthSideDataTO))
#define DXMarketDepthSideDataTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMarketDepthSideDataTO : PSBaseTransferObject
@property (readonly, class, strong) DXMarketDepthSideDataTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMarketDepthSideDataTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMarketDepthSideDataTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMarketDepthSideDataTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getAveragePrice;

- (NSString *)getExchangeName;

- (jlong)getHistogram;

- (NSString *)getMarketMaker;

- (jint)getOrderCount;

- (jlong)getPrice;

- (jlong)getSize;

- (jlong)getTotalSize;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAveragePriceWithLong:(jlong)averagePrice;

- (void)setExchangeNameWithNSString:(NSString *)exchangeName;

- (void)setHistogramWithLong:(jlong)histogram;

- (void)setMarketMakerWithNSString:(NSString *)marketMaker;

- (void)setOrderCountWithInt:(jint)orderCount;

- (void)setPriceWithLong:(jlong)price;

- (void)setSizeWithLong:(jlong)size;

- (void)setTotalSizeWithLong:(jlong)totalSize;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMarketDepthSideDataTO)

inline DXMarketDepthSideDataTO *DXMarketDepthSideDataTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketDepthSideDataTO *DXMarketDepthSideDataTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketDepthSideDataTO, EMPTY, DXMarketDepthSideDataTO *)

FOUNDATION_EXPORT void DXMarketDepthSideDataTO_init(DXMarketDepthSideDataTO *self);

FOUNDATION_EXPORT DXMarketDepthSideDataTO *new_DXMarketDepthSideDataTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketDepthSideDataTO *create_DXMarketDepthSideDataTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketDepthSideDataTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthSideDataTO DXMarketDepthSideDataTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthSideDataTO")
