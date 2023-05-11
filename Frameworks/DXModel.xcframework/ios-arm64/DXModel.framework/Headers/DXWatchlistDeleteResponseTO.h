
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistDeleteResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteResponseTO || defined(INCLUDE_DXWatchlistDeleteResponseTO))
#define DXWatchlistDeleteResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXWatchlistDeleteResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistDeleteResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistDeleteResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)errorTO;

- (DXWatchlistDeleteResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistDeleteResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXWatchlistDeleteResponseTO)

inline DXWatchlistDeleteResponseTO *DXWatchlistDeleteResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistDeleteResponseTO *DXWatchlistDeleteResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistDeleteResponseTO, EMPTY, DXWatchlistDeleteResponseTO *)

FOUNDATION_EXPORT void DXWatchlistDeleteResponseTO_initWithPSErrorTO_(DXWatchlistDeleteResponseTO *self, PSErrorTO *errorTO);

FOUNDATION_EXPORT DXWatchlistDeleteResponseTO *new_DXWatchlistDeleteResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistDeleteResponseTO *create_DXWatchlistDeleteResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO);

FOUNDATION_EXPORT void DXWatchlistDeleteResponseTO_init(DXWatchlistDeleteResponseTO *self);

FOUNDATION_EXPORT DXWatchlistDeleteResponseTO *new_DXWatchlistDeleteResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistDeleteResponseTO *create_DXWatchlistDeleteResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistDeleteResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteResponseTO DXWatchlistDeleteResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteResponseTO")
