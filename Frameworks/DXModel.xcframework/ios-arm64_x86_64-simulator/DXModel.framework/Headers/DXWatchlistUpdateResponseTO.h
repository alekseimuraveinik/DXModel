
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistUpdateResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateResponseTO || defined(INCLUDE_DXWatchlistUpdateResponseTO))
#define DXWatchlistUpdateResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXWatchlistUpdateResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistUpdateResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistUpdateResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)errorTO;

- (DXWatchlistUpdateResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistUpdateResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getErrorTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorTOWithPSErrorTO:(PSErrorTO *)errorTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistUpdateResponseTO)

inline DXWatchlistUpdateResponseTO *DXWatchlistUpdateResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistUpdateResponseTO *DXWatchlistUpdateResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistUpdateResponseTO, EMPTY, DXWatchlistUpdateResponseTO *)

FOUNDATION_EXPORT void DXWatchlistUpdateResponseTO_initWithPSErrorTO_(DXWatchlistUpdateResponseTO *self, PSErrorTO *errorTO);

FOUNDATION_EXPORT DXWatchlistUpdateResponseTO *new_DXWatchlistUpdateResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistUpdateResponseTO *create_DXWatchlistUpdateResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO);

FOUNDATION_EXPORT void DXWatchlistUpdateResponseTO_init(DXWatchlistUpdateResponseTO *self);

FOUNDATION_EXPORT DXWatchlistUpdateResponseTO *new_DXWatchlistUpdateResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistUpdateResponseTO *create_DXWatchlistUpdateResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistUpdateResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateResponseTO DXWatchlistUpdateResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateResponseTO")
