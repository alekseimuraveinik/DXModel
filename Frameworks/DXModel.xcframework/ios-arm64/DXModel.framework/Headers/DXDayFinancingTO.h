
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingDayFinancingTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFinancingDayFinancingTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingDayFinancingTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingDayFinancingTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFinancingDayFinancingTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXDayFinancingTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingDayFinancingTO || defined(INCLUDE_DXDayFinancingTO))
#define DXDayFinancingTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXDayFinancingTO : PSBaseTransferObject
@property (readonly, class, strong) DXDayFinancingTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXDayFinancingTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXDayFinancingTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXDayFinancingTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getDay;

- (jlong)getFinancingValueLong;

- (jlong)getFinancingValueShort;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDayWithInt:(jint)day;

- (void)setFinancingValueLongWithLong:(jlong)financingValueLong;

- (void)setFinancingValueShortWithLong:(jlong)financingValueShort;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXDayFinancingTO)

inline DXDayFinancingTO *DXDayFinancingTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXDayFinancingTO *DXDayFinancingTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXDayFinancingTO, EMPTY, DXDayFinancingTO *)

FOUNDATION_EXPORT void DXDayFinancingTO_init(DXDayFinancingTO *self);

FOUNDATION_EXPORT DXDayFinancingTO *new_DXDayFinancingTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXDayFinancingTO *create_DXDayFinancingTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXDayFinancingTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentFinancingDayFinancingTO DXDayFinancingTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingDayFinancingTO")
