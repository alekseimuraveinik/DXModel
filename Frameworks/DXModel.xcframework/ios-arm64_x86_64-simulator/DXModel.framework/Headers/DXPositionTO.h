
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionPositionTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionPositionTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionTO || defined(INCLUDE_DXPositionTO))
#define DXPositionTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class DXInstrumentTO;
@class DXProtectionOrderTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXPositionTO : PSBaseTransferObject
@property (readonly, class, strong) DXPositionTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPositionTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPositionTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPositionTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (jlong)getChangeTime;

- (NSString *)getCode;

- (jlong)getCost;

- (jlong)getCurrentPrice;

- (jlong)getFpl;

- (DXInstrumentTO *)getInstrument;

- (jlong)getMargin;

- (jlong)getPrice;

- (jdouble)getQuantity;

- (jlong)getSettlementPl;

- (jlong)getSize;

- (DXProtectionOrderTO *)getStopLoss;

- (DXProtectionOrderTO *)getTakeProfit;

- (jlong)getTotalCommissions;

- (jlong)getTotalFinancing;

- (jdouble)getVolume;

- (NSUInteger)hash;

- (jboolean)isCanHaveAttachedOrders;

- (jboolean)isHasCloseByPositions;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setCanHaveAttachedOrdersWithBoolean:(jboolean)canHaveAttachedOrders;

- (void)setChangeTimeWithLong:(jlong)changeTime;

- (void)setCodeWithNSString:(NSString *)code;

- (void)setCostWithLong:(jlong)cost;

- (void)setCurrentPriceWithLong:(jlong)currentPrice;

- (void)setFplWithLong:(jlong)fpl;

- (void)setHasCloseByPositionsWithBoolean:(jboolean)hasCloseByPositions;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (void)setMarginWithLong:(jlong)margin;

- (void)setPriceWithLong:(jlong)price;

- (void)setQuantityWithDouble:(jdouble)quantity;

- (void)setSettlementPlWithLong:(jlong)settlementPl;

- (void)setSizeWithLong:(jlong)size;

- (void)setStopLossWithDXProtectionOrderTO:(DXProtectionOrderTO *)stopLoss;

- (void)setTakeProfitWithDXProtectionOrderTO:(DXProtectionOrderTO *)takeProfit;

- (void)setTotalCommissionsWithLong:(jlong)totalCommissions;

- (void)setTotalFinancingWithLong:(jlong)totalFinancing;

- (void)setVolumeWithDouble:(jdouble)volume;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPositionTO)

inline DXPositionTO *DXPositionTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionTO *DXPositionTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionTO, EMPTY, DXPositionTO *)

FOUNDATION_EXPORT void DXPositionTO_init(DXPositionTO *self);

FOUNDATION_EXPORT DXPositionTO *new_DXPositionTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionTO *create_DXPositionTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionPositionTO DXPositionTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionTO")
