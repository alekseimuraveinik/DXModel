
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderEventTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsOrderOrderEventTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderEventTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderEventTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsOrderOrderEventTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEventTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderEventTO || defined(INCLUDE_DXOrderEventTO))
#define DXOrderEventTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventTO 1
#define INCLUDE_DXEventTO 1
#include "DXEventTO.h"

@class DXOrderTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXOrderEventTO : DXEventTO
@property (readonly, class, strong) DXOrderEventTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderEventTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderEventTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderEventTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (DXOrderTO *)getOrder;

- (NSString *)getPositionCode;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (void)setOrderWithDXOrderTO:(DXOrderTO *)order;

- (void)setPositionCodeWithNSString:(NSString *)positionCode;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderEventTO)

inline DXOrderEventTO *DXOrderEventTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEventTO *DXOrderEventTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEventTO, EMPTY, DXOrderEventTO *)

FOUNDATION_EXPORT void DXOrderEventTO_init(DXOrderEventTO *self);

FOUNDATION_EXPORT DXOrderEventTO *new_DXOrderEventTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEventTO *create_DXOrderEventTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEventTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsOrderOrderEventTO DXOrderEventTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsOrderOrderEventTO")
