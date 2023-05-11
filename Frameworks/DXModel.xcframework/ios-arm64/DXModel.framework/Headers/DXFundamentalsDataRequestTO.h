
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXFundamentalsDataRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataRequestTO || defined(INCLUDE_DXFundamentalsDataRequestTO))
#define DXFundamentalsDataRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXInstrumentTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXFundamentalsDataRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXFundamentalsDataRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXFundamentalsDataRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (DXFundamentalsDataRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXFundamentalsDataRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXInstrumentTO *)getInstrument;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXFundamentalsDataRequestTO)

inline DXFundamentalsDataRequestTO *DXFundamentalsDataRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXFundamentalsDataRequestTO *DXFundamentalsDataRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXFundamentalsDataRequestTO, EMPTY, DXFundamentalsDataRequestTO *)

FOUNDATION_EXPORT void DXFundamentalsDataRequestTO_initWithDXInstrumentTO_(DXFundamentalsDataRequestTO *self, DXInstrumentTO *instrument);

FOUNDATION_EXPORT DXFundamentalsDataRequestTO *new_DXFundamentalsDataRequestTO_initWithDXInstrumentTO_(DXInstrumentTO *instrument) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXFundamentalsDataRequestTO *create_DXFundamentalsDataRequestTO_initWithDXInstrumentTO_(DXInstrumentTO *instrument);

FOUNDATION_EXPORT void DXFundamentalsDataRequestTO_init(DXFundamentalsDataRequestTO *self);

FOUNDATION_EXPORT DXFundamentalsDataRequestTO *new_DXFundamentalsDataRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXFundamentalsDataRequestTO *create_DXFundamentalsDataRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXFundamentalsDataRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataRequestTO DXFundamentalsDataRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsDataRequestTO")
