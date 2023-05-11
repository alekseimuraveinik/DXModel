
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXFundamentalsDataResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataResponseTO || defined(INCLUDE_DXFundamentalsDataResponseTO))
#define DXFundamentalsDataResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXInstrumentDataTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXFundamentalsDataResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXFundamentalsDataResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXFundamentalsDataResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXInstrumentDataTO:(DXInstrumentDataTO *)data;

- (DXFundamentalsDataResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXFundamentalsDataResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXInstrumentDataTO *)getData;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDataWithDXInstrumentDataTO:(DXInstrumentDataTO *)data;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXFundamentalsDataResponseTO)

inline DXFundamentalsDataResponseTO *DXFundamentalsDataResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXFundamentalsDataResponseTO *DXFundamentalsDataResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXFundamentalsDataResponseTO, EMPTY, DXFundamentalsDataResponseTO *)

FOUNDATION_EXPORT void DXFundamentalsDataResponseTO_initWithDXInstrumentDataTO_(DXFundamentalsDataResponseTO *self, DXInstrumentDataTO *data);

FOUNDATION_EXPORT DXFundamentalsDataResponseTO *new_DXFundamentalsDataResponseTO_initWithDXInstrumentDataTO_(DXInstrumentDataTO *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXFundamentalsDataResponseTO *create_DXFundamentalsDataResponseTO_initWithDXInstrumentDataTO_(DXInstrumentDataTO *data);

FOUNDATION_EXPORT void DXFundamentalsDataResponseTO_init(DXFundamentalsDataResponseTO *self);

FOUNDATION_EXPORT DXFundamentalsDataResponseTO *new_DXFundamentalsDataResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXFundamentalsDataResponseTO *create_DXFundamentalsDataResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXFundamentalsDataResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataResponseTO DXFundamentalsDataResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataResponseTO")
