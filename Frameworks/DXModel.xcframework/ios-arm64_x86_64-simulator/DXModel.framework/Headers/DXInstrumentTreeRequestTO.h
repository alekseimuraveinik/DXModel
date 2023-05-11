
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentTreeRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeRequestTO || defined(INCLUDE_DXInstrumentTreeRequestTO))
#define DXInstrumentTreeRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXInstrumentTreeRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentTreeRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentTreeRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentTreeRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentTreeRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getPath;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPathWithNSString:(NSString *)path;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentTreeRequestTO)

inline DXInstrumentTreeRequestTO *DXInstrumentTreeRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTreeRequestTO *DXInstrumentTreeRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTreeRequestTO, EMPTY, DXInstrumentTreeRequestTO *)

FOUNDATION_EXPORT void DXInstrumentTreeRequestTO_init(DXInstrumentTreeRequestTO *self);

FOUNDATION_EXPORT DXInstrumentTreeRequestTO *new_DXInstrumentTreeRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTreeRequestTO *create_DXInstrumentTreeRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentTreeRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeRequestTO DXInstrumentTreeRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeRequestTO")
