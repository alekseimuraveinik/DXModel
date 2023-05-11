
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingInstrumentDailyFinancingTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFinancingInstrumentDailyFinancingTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingInstrumentDailyFinancingTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingInstrumentDailyFinancingTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFinancingInstrumentDailyFinancingTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentDailyFinancingTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingInstrumentDailyFinancingTO || defined(INCLUDE_DXInstrumentDailyFinancingTO))
#define DXInstrumentDailyFinancingTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXFinancingModeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXInstrumentDailyFinancingTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentDailyFinancingTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentDailyFinancingTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentDailyFinancingTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentDailyFinancingTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getFinancingDays;

- (DXFinancingModeEnum *)getFinancingMode;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setFinancingDaysWithPSListTO:(PSListTO *)financingDays;

- (void)setFinancingModeWithDXFinancingModeEnum:(DXFinancingModeEnum *)financingMode;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentDailyFinancingTO)

inline DXInstrumentDailyFinancingTO *DXInstrumentDailyFinancingTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentDailyFinancingTO *DXInstrumentDailyFinancingTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentDailyFinancingTO, EMPTY, DXInstrumentDailyFinancingTO *)

FOUNDATION_EXPORT void DXInstrumentDailyFinancingTO_init(DXInstrumentDailyFinancingTO *self);

FOUNDATION_EXPORT DXInstrumentDailyFinancingTO *new_DXInstrumentDailyFinancingTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentDailyFinancingTO *create_DXInstrumentDailyFinancingTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentDailyFinancingTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentFinancingInstrumentDailyFinancingTO DXInstrumentDailyFinancingTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingInstrumentDailyFinancingTO")
