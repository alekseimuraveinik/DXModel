
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistRenameResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameResponseTO || defined(INCLUDE_DXWatchlistRenameResponseTO))
#define DXWatchlistRenameResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXWatchlistRenameResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistRenameResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistRenameResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)errorTO;

- (DXWatchlistRenameResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistRenameResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXWatchlistRenameResponseTO)

inline DXWatchlistRenameResponseTO *DXWatchlistRenameResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistRenameResponseTO *DXWatchlistRenameResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistRenameResponseTO, EMPTY, DXWatchlistRenameResponseTO *)

FOUNDATION_EXPORT void DXWatchlistRenameResponseTO_initWithPSErrorTO_(DXWatchlistRenameResponseTO *self, PSErrorTO *errorTO);

FOUNDATION_EXPORT DXWatchlistRenameResponseTO *new_DXWatchlistRenameResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistRenameResponseTO *create_DXWatchlistRenameResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO);

FOUNDATION_EXPORT void DXWatchlistRenameResponseTO_init(DXWatchlistRenameResponseTO *self);

FOUNDATION_EXPORT DXWatchlistRenameResponseTO *new_DXWatchlistRenameResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistRenameResponseTO *create_DXWatchlistRenameResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistRenameResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameResponseTO DXWatchlistRenameResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameResponseTO")
