//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBLayoutElementDescriptor-Protocol.h>
#import <SpringBoard/SBWorkspaceEntityGenerating-Protocol.h>

@class NSString;

@interface SBLayoutElement : NSObject <BSDescriptionProviding, SBLayoutElementDescriptor, SBWorkspaceEntityGenerating>
{
    NSString *_uniqueIdentifier;
    long long _layoutRole;
    NSUInteger _supportedLayoutRoles;
    NSUInteger _layoutAttributes;
    Class _viewControllerClass;
    id /* CDUnknownBlockType */ _entityGenerator;
}

+ (id)elementWithDescriptor:(id)arg1 layoutRole:(long long)arg2;
+ (id)elementWithDescriptor:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ entityGenerator; // @synthesize entityGenerator=_entityGenerator;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)workspaceEntity;
- (BOOL)hasLayoutAttributes:(NSUInteger)arg1;
- (BOOL)supportsLayoutRole:(long long)arg1;
@property(readonly, nonatomic) Class viewControllerClass;
@property(readonly, nonatomic) NSUInteger layoutAttributes;
@property(readonly, nonatomic) NSUInteger supportedLayoutRoles;
@property(readonly, nonatomic) long long layoutRole;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 supportedLayoutRoles:(NSUInteger)arg3 layoutAttributes:(NSUInteger)arg4 viewControllerClass:(Class)arg5 entityGenerator:(id /* CDUnknownBlockType */)arg6;

@end

