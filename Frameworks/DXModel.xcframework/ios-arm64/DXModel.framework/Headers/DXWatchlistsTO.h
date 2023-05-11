
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsTO || defined(INCLUDE_DXWatchlistsTO))
#define DXWatchlistsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXWatchlistsTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSListTO:(PSListTO *)privateWatchlists
                              withPSListTO:(PSListTO *)publicWatchlists;

- (DXWatchlistsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getPrivateWatchlists;

- (PSListTO *)getPublicWatchlists;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPrivateWatchlistsWithPSListTO:(PSListTO *)privateWatchlists;

- (void)setPublicWatchlistsWithPSListTO:(PSListTO *)publicWatchlists;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistsTO)

inline DXWatchlistsTO *DXWatchlistsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistsTO *DXWatchlistsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistsTO, EMPTY, DXWatchlistsTO *)

FOUNDATION_EXPORT void DXWatchlistsTO_initWithPSListTO_withPSListTO_(DXWatchlistsTO *self, PSListTO *privateWatchlists, PSListTO *publicWatchlists);

FOUNDATION_EXPORT DXWatchlistsTO *new_DXWatchlistsTO_initWithPSListTO_withPSListTO_(PSListTO *privateWatchlists, PSListTO *publicWatchlists) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistsTO *create_DXWatchlistsTO_initWithPSListTO_withPSListTO_(PSListTO *privateWatchlists, PSListTO *publicWatchlists);

FOUNDATION_EXPORT void DXWatchlistsTO_init(DXWatchlistsTO *self);

FOUNDATION_EXPORT DXWatchlistsTO *new_DXWatchlistsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistsTO *create_DXWatchlistsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistsTO DXWatchlistsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsTO")
