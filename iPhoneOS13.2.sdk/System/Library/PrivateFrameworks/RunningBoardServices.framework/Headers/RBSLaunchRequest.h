//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RunningBoardServices/RBSRequest.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>


@class NSString, RBSLaunchContext;

@interface RBSLaunchRequest : RBSRequest <BSXPCSecureCoding, NSCopying>
{
    RBSLaunchContext *_context;
}

+ (_Bool)supportsBSXPCSecureCoding;
@property(readonly, nonatomic) RBSLaunchContext *context; // @synthesize context=_context;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)execute:(out id *)arg1;
- (_Bool)execute:(out id *)arg1 error:(out id *)arg2;
- (_Bool)execute:(out id *)arg1 assertion:(out id *)arg2 error:(out id *)arg3;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
