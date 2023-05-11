
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistWithContentResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentResponseTO || defined(INCLUDE_DXWatchlistWithContentResponseTO))
#define DXWatchlistWithContentResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistWithContentTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXWatchlistWithContentResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistWithContentResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistWithContentResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistWithContentTO:(DXWatchlistWithContentTO *)watchlistWithContentTO
                                              withPSListTO:(PSListTO *)instruments;

- (DXWatchlistWithContentResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistWithContentResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getInstruments;

- (DXWatchlistWithContentTO *)getWatchlistWithContentTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setInstrumentsWithPSListTO:(PSListTO *)instruments;

- (void)setWatchlistWithContentTOWithDXWatchlistWithContentTO:(DXWatchlistWithContentTO *)watchlistWithContentTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistWithContentResponseTO)

inline DXWatchlistWithContentResponseTO *DXWatchlistWithContentResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistWithContentResponseTO *DXWatchlistWithContentResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistWithContentResponseTO, EMPTY, DXWatchlistWithContentResponseTO *)

FOUNDATION_EXPORT void DXWatchlistWithContentResponseTO_initWithDXWatchlistWithContentTO_withPSListTO_(DXWatchlistWithContentResponseTO *self, DXWatchlistWithContentTO *watchlistWithContentTO, PSListTO *instruments);

FOUNDATION_EXPORT DXWatchlistWithContentResponseTO *new_DXWatchlistWithContentResponseTO_initWithDXWatchlistWithContentTO_withPSListTO_(DXWatchlistWithContentTO *watchlistWithContentTO, PSListTO *instruments) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistWithContentResponseTO *create_DXWatchlistWithContentResponseTO_initWithDXWatchlistWithContentTO_withPSListTO_(DXWatchlistWithContentTO *watchlistWithContentTO, PSListTO *instruments);

FOUNDATION_EXPORT void DXWatchlistWithContentResponseTO_init(DXWatchlistWithContentResponseTO *self);

FOUNDATION_EXPORT DXWatchlistWithContentResponseTO *new_DXWatchlistWithContentResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistWithContentResponseTO *create_DXWatchlistWithContentResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistWithContentResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentResponseTO DXWatchlistWithContentResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentResponseTO")
