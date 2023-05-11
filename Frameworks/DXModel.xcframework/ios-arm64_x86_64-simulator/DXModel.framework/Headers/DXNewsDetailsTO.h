
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsDetailsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiNewsNewsDetailsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsDetailsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsDetailsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiNewsNewsDetailsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXNewsDetailsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsDetailsTO || defined(INCLUDE_DXNewsDetailsTO))
#define DXNewsDetailsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXNewsDetailsTO : PSBaseTransferObject
@property (readonly, class, strong) DXNewsDetailsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXNewsDetailsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXNewsDetailsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXNewsDetailsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getPublicationTime;

- (NSString *)getSummary;

- (NSString *)getTitle;

- (NSString *)getUrl;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPublicationTimeWithLong:(jlong)publicationTime;

- (void)setSummaryWithNSString:(NSString *)summary;

- (void)setTitleWithNSString:(NSString *)title;

- (void)setUrlWithNSString:(NSString *)url;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXNewsDetailsTO)

inline DXNewsDetailsTO *DXNewsDetailsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXNewsDetailsTO *DXNewsDetailsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXNewsDetailsTO, EMPTY, DXNewsDetailsTO *)

FOUNDATION_EXPORT void DXNewsDetailsTO_init(DXNewsDetailsTO *self);

FOUNDATION_EXPORT DXNewsDetailsTO *new_DXNewsDetailsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXNewsDetailsTO *create_DXNewsDetailsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXNewsDetailsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiNewsNewsDetailsTO DXNewsDetailsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsDetailsTO")
