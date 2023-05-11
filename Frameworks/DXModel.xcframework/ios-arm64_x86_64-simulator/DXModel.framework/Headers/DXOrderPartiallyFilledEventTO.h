
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderPartiallyFilledEventTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsOrderOrderPartiallyFilledEventTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderPartiallyFilledEventTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderPartiallyFilledEventTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsOrderOrderPartiallyFilledEventTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderPartiallyFilledEventTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderPartiallyFilledEventTO || defined(INCLUDE_DXOrderPartiallyFilledEventTO))
#define DXOrderPartiallyFilledEventTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventTO 1
#define INCLUDE_DXEventTO 1
#include "DXEventTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXOrderPartiallyFilledEventTO : DXEventTO
@property (readonly, class, strong) DXOrderPartiallyFilledEventTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderPartiallyFilledEventTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderPartiallyFilledEventTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderPartiallyFilledEventTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jdouble)getFilledSize;

- (jdouble)getFillPrice;

- (jdouble)getInitialSize;

- (NSString *)getOrderID;

- (jdouble)getOrderPrice;

- (NSString *)getOrderType;

- (jdouble)getRemainingSize;

- (NSString *)getSide;

- (NSString *)getSymbol;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setFilledSizeWithDouble:(jdouble)filledSize;

- (void)setFillPriceWithDouble:(jdouble)fillPrice;

- (void)setInitialSizeWithDouble:(jdouble)initialSize;

- (void)setOrderIDWithNSString:(NSString *)orderID;

- (void)setOrderPriceWithDouble:(jdouble)orderPrice;

- (void)setOrderTypeWithNSString:(NSString *)orderType;

- (void)setRemainingSizeWithDouble:(jdouble)remainingSize;

- (void)setSideWithNSString:(NSString *)side;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderPartiallyFilledEventTO)

inline DXOrderPartiallyFilledEventTO *DXOrderPartiallyFilledEventTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderPartiallyFilledEventTO *DXOrderPartiallyFilledEventTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderPartiallyFilledEventTO, EMPTY, DXOrderPartiallyFilledEventTO *)

FOUNDATION_EXPORT void DXOrderPartiallyFilledEventTO_init(DXOrderPartiallyFilledEventTO *self);

FOUNDATION_EXPORT DXOrderPartiallyFilledEventTO *new_DXOrderPartiallyFilledEventTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderPartiallyFilledEventTO *create_DXOrderPartiallyFilledEventTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderPartiallyFilledEventTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsOrderOrderPartiallyFilledEventTO DXOrderPartiallyFilledEventTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderPartiallyFilledEventTO")
