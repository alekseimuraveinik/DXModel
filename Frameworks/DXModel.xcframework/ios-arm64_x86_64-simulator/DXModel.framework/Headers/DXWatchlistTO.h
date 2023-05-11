
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistTO || defined(INCLUDE_DXWatchlistTO))
#define DXWatchlistTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXWatchlistTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)id_
                         withNSString:(NSString *)name
                          withBoolean:(jboolean)editable;

- (DXWatchlistTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getId;

- (NSString *)getName;

- (NSUInteger)hash;

- (jboolean)isEditable;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setEditableWithBoolean:(jboolean)editable;

- (void)setIdWithInt:(jint)id_;

- (void)setNameWithNSString:(NSString *)name;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistTO)

inline DXWatchlistTO *DXWatchlistTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistTO *DXWatchlistTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistTO, EMPTY, DXWatchlistTO *)

FOUNDATION_EXPORT void DXWatchlistTO_initWithInt_withNSString_withBoolean_(DXWatchlistTO *self, jint id_, NSString *name, jboolean editable);

FOUNDATION_EXPORT DXWatchlistTO *new_DXWatchlistTO_initWithInt_withNSString_withBoolean_(jint id_, NSString *name, jboolean editable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistTO *create_DXWatchlistTO_initWithInt_withNSString_withBoolean_(jint id_, NSString *name, jboolean editable);

FOUNDATION_EXPORT void DXWatchlistTO_init(DXWatchlistTO *self);

FOUNDATION_EXPORT DXWatchlistTO *new_DXWatchlistTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistTO *create_DXWatchlistTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistTO DXWatchlistTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistTO")
