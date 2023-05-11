
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderGroupTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO || defined(INCLUDE_DXOrderGroupTO))
#define DXOrderGroupTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXOrderGroupTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol DXOrderGroupVisitor;
@protocol PSTransferObject;

@interface DXOrderGroupTO : PSBaseTransferObject

#pragma mark Public

- (DXOrderGroupTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getOrders;

- (DXOrderGroupTypeEnum *)getType;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setTypeWithDXOrderGroupTypeEnum:(DXOrderGroupTypeEnum *)type;

- (NSString *)description;

- (void)visitByWithDXOrderGroupVisitor:(id<DXOrderGroupVisitor>)visitor;

#pragma mark Protected

- (instancetype __nonnull)init;

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(DXOrderGroupTO)

FOUNDATION_EXPORT void DXOrderGroupTO_init(DXOrderGroupTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderGroupTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO DXOrderGroupTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO")
