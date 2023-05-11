
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentsResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsResponseTO || defined(INCLUDE_DXInstrumentsResponseTO))
#define DXInstrumentsResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXInstrumentsResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentsResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentsResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentsResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentsResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getInstruments;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setInstrumentsWithPSListTO:(PSListTO *)instruments;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentsResponseTO)

inline DXInstrumentsResponseTO *DXInstrumentsResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentsResponseTO *DXInstrumentsResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentsResponseTO, EMPTY, DXInstrumentsResponseTO *)

FOUNDATION_EXPORT void DXInstrumentsResponseTO_init(DXInstrumentsResponseTO *self);

FOUNDATION_EXPORT DXInstrumentsResponseTO *new_DXInstrumentsResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentsResponseTO *create_DXInstrumentsResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentsResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentsResponseTO DXInstrumentsResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsResponseTO")
