
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistRenameRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameRequestTO || defined(INCLUDE_DXWatchlistRenameRequestTO))
#define DXWatchlistRenameRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXWatchlistRenameRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistRenameRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistRenameRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistTO:(DXWatchlistTO *)watchlistTO;

- (DXWatchlistRenameRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistRenameRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXWatchlistTO *)getWatchlistTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setWatchlistTOWithDXWatchlistTO:(DXWatchlistTO *)watchlistTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistRenameRequestTO)

inline DXWatchlistRenameRequestTO *DXWatchlistRenameRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistRenameRequestTO *DXWatchlistRenameRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistRenameRequestTO, EMPTY, DXWatchlistRenameRequestTO *)

FOUNDATION_EXPORT void DXWatchlistRenameRequestTO_initWithDXWatchlistTO_(DXWatchlistRenameRequestTO *self, DXWatchlistTO *watchlistTO);

FOUNDATION_EXPORT DXWatchlistRenameRequestTO *new_DXWatchlistRenameRequestTO_initWithDXWatchlistTO_(DXWatchlistTO *watchlistTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistRenameRequestTO *create_DXWatchlistRenameRequestTO_initWithDXWatchlistTO_(DXWatchlistTO *watchlistTO);

FOUNDATION_EXPORT void DXWatchlistRenameRequestTO_init(DXWatchlistRenameRequestTO *self);

FOUNDATION_EXPORT DXWatchlistRenameRequestTO *new_DXWatchlistRenameRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistRenameRequestTO *create_DXWatchlistRenameRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistRenameRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameRequestTO DXWatchlistRenameRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameRequestTO")
