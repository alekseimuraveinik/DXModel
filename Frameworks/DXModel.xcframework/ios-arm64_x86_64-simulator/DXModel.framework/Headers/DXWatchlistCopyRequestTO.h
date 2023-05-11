
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistCopyRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyRequestTO || defined(INCLUDE_DXWatchlistCopyRequestTO))
#define DXWatchlistCopyRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXWatchlistCopyRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistCopyRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistCopyRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)watchlistId;

- (DXWatchlistCopyRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistCopyRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getWatchlistId;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setWatchlistIdWithInt:(jint)watchlistId;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistCopyRequestTO)

inline DXWatchlistCopyRequestTO *DXWatchlistCopyRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistCopyRequestTO *DXWatchlistCopyRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistCopyRequestTO, EMPTY, DXWatchlistCopyRequestTO *)

FOUNDATION_EXPORT void DXWatchlistCopyRequestTO_initWithInt_(DXWatchlistCopyRequestTO *self, jint watchlistId);

FOUNDATION_EXPORT DXWatchlistCopyRequestTO *new_DXWatchlistCopyRequestTO_initWithInt_(jint watchlistId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCopyRequestTO *create_DXWatchlistCopyRequestTO_initWithInt_(jint watchlistId);

FOUNDATION_EXPORT void DXWatchlistCopyRequestTO_init(DXWatchlistCopyRequestTO *self);

FOUNDATION_EXPORT DXWatchlistCopyRequestTO *new_DXWatchlistCopyRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCopyRequestTO *create_DXWatchlistCopyRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistCopyRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyRequestTO DXWatchlistCopyRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyRequestTO")
