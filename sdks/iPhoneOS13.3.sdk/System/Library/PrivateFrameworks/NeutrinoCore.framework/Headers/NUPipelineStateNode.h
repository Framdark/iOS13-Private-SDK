//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NUPipelineStateNode : NURenderNode
{
}

- (id)resolvedNodeWithCachedInputs:(NSDictionary )arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id )arg4;
- (id)debugQuickLookObject;
- (id)_evaluateImage:(out id )arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id )arg3;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;

@end
