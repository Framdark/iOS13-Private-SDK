//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSynchronizedTransactionGroup.h>

#import <FrontBoard/FBApplicationProcessLaunchTransactionObserver-Protocol.h>
#import <FrontBoard/FBUpdateSceneTransactionObserver-Protocol.h>

@class FBApplicationProcess, FBApplicationProcessLaunchTransaction, NSMutableArray, NSString, RBSProcessIdentity;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver>
{
    RBSProcessIdentity *_identity;
    FBApplicationProcessLaunchTransaction *_processLaunchTransaction;
    BOOL _processLaunched;
    BOOL _waitsForSceneCommits;
    NSMutableArray *_updateSceneTransactions;
    NSMutableArray *_pendingUpdateSceneBlocks;
}

@property(nonatomic) BOOL waitsForSceneCommits; // @synthesize waitsForSceneCommits=_waitsForSceneCommits;
// - (void).cxx_destruct;
- (void)updateSceneTransactionDidCommitUpdate:(id)arg1;
- (void)updateSceneTransactionWillCommitUpdate:(id)arg1;
- (void)updateSceneTransactionWillUpdateScene:(id)arg1;
- (void)updateSceneTransactionDidCreateScene:(id)arg1;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)_executeSceneUpdatesIfAppropriate;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteWillCommitUpdateForScene:(id)arg1;
- (void)_performSynchronizedCommit:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (BOOL)_canBeInterrupted;
- (BOOL)_shouldFailForChildTransaction:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_willAddChildTransaction:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
@property(readonly, nonatomic) FBApplicationProcess *process;
@property(readonly, nonatomic) NSString *bundleID;
- (id)initWithProcessIdentity:(id)arg1 executionContextProvider:(id /* CDUnknownBlockType */)arg2;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

