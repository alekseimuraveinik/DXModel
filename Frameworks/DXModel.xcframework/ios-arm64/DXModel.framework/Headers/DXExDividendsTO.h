
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentDividendsExDividendsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentDividendsExDividendsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentDividendsExDividendsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentDividendsExDividendsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentDividendsExDividendsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXExDividendsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentDividendsExDividendsTO || defined(INCLUDE_DXExDividendsTO))
#define DXExDividendsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXExDividendsTO : PSBaseTransferObject
@property (readonly, class, strong) DXExDividendsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXExDividendsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXExDividendsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXExDividendsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getCurrencySymbol;

- (jlong)getLongAdjustment;

- (jlong)getShortAdjustment;

- (jlong)getTransferTime;

- (NSUInteger)hash;

- (jboolean)isNotEmpty;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCurrencySymbolWithNSString:(NSString *)currencySymbol;

- (void)setLongAdjustmentWithLong:(jlong)longAdjustment;

- (void)setNotEmptyWithBoolean:(jboolean)isNotEmpty;

- (void)setShortAdjustmentWithLong:(jlong)shortAdjustment;

- (void)setTransferTimeWithLong:(jlong)transferTime;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXExDividendsTO)

inline DXExDividendsTO *DXExDividendsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXExDividendsTO *DXExDividendsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXExDividendsTO, EMPTY, DXExDividendsTO *)

FOUNDATION_EXPORT void DXExDividendsTO_init(DXExDividendsTO *self);

FOUNDATION_EXPORT DXExDividendsTO *new_DXExDividendsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXExDividendsTO *create_DXExDividendsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXExDividendsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentDividendsExDividendsTO DXExDividendsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentDividendsExDividendsTO")
