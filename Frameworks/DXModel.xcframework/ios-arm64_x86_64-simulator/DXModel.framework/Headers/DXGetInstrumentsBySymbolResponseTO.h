
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXGetInstrumentsBySymbolResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolResponseTO || defined(INCLUDE_DXGetInstrumentsBySymbolResponseTO))
#define DXGetInstrumentsBySymbolResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXGetInstrumentsBySymbolResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXGetInstrumentsBySymbolResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXGetInstrumentsBySymbolResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSListTO:(PSListTO *)instruments;

- (DXGetInstrumentsBySymbolResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXGetInstrumentsBySymbolResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXGetInstrumentsBySymbolResponseTO)

inline DXGetInstrumentsBySymbolResponseTO *DXGetInstrumentsBySymbolResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXGetInstrumentsBySymbolResponseTO *DXGetInstrumentsBySymbolResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXGetInstrumentsBySymbolResponseTO, EMPTY, DXGetInstrumentsBySymbolResponseTO *)

FOUNDATION_EXPORT void DXGetInstrumentsBySymbolResponseTO_initWithPSListTO_(DXGetInstrumentsBySymbolResponseTO *self, PSListTO *instruments);

FOUNDATION_EXPORT DXGetInstrumentsBySymbolResponseTO *new_DXGetInstrumentsBySymbolResponseTO_initWithPSListTO_(PSListTO *instruments) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXGetInstrumentsBySymbolResponseTO *create_DXGetInstrumentsBySymbolResponseTO_initWithPSListTO_(PSListTO *instruments);

FOUNDATION_EXPORT void DXGetInstrumentsBySymbolResponseTO_init(DXGetInstrumentsBySymbolResponseTO *self);

FOUNDATION_EXPORT DXGetInstrumentsBySymbolResponseTO *new_DXGetInstrumentsBySymbolResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXGetInstrumentsBySymbolResponseTO *create_DXGetInstrumentsBySymbolResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXGetInstrumentsBySymbolResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolResponseTO DXGetInstrumentsBySymbolResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolResponseTO")
