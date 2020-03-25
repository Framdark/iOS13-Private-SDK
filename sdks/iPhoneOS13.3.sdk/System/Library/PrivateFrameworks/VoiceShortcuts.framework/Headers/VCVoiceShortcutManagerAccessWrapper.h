//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCVoiceShortcutManagerXPCInterface-Protocol.h>
#import <VoiceShortcuts/WFOutOfProcessWorkflowControllerDelegate-Protocol.h>

@class NSSet, VCAccessSpecifier, VCCoreDuetListener, VCVoiceShortcutManager, WFOutOfProcessWorkflowController;

@interface VCVoiceShortcutManagerAccessWrapper : NSObject <WFOutOfProcessWorkflowControllerDelegate, VCVoiceShortcutManagerXPCInterface>
{
    VCAccessSpecifier *_accessSpecifier;
    VCVoiceShortcutManager *_voiceShortcutManager;
    VCCoreDuetListener *_coreDuetListener;
    NSSet *_syncDataHandlers;
    WFOutOfProcessWorkflowController *_outOfProcessWorkflowController;
    id /* CDUnknownBlockType */ _runShortcutCompletionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ runShortcutCompletionHandler; // @synthesize runShortcutCompletionHandler=_runShortcutCompletionHandler;
@property(retain, nonatomic) WFOutOfProcessWorkflowController *outOfProcessWorkflowController; // @synthesize outOfProcessWorkflowController=_outOfProcessWorkflowController;
@property(readonly, copy, nonatomic) NSSet *syncDataHandlers; // @synthesize syncDataHandlers=_syncDataHandlers;
@property(readonly, nonatomic) VCCoreDuetListener *coreDuetListener; // @synthesize coreDuetListener=_coreDuetListener;
@property(readonly, nonatomic) VCVoiceShortcutManager *voiceShortcutManager; // @synthesize voiceShortcutManager=_voiceShortcutManager;
@property(readonly, copy, nonatomic) VCAccessSpecifier *accessSpecifier; // @synthesize accessSpecifier=_accessSpecifier;
// - (void).cxx_destruct;
- (void)obliterateShortcuts:(id /* CDUnknownBlockType */)arg1;
- (void)hasRunEventsInTheLast5DaysWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3;
- (void)startRunningWorkflow:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)runShortcutWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)runShortcutWithName:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)unregisterTriggerWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)refreshTriggerWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getSiriPodcastsDatabaseURLWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)requestDataMigration:(id /* CDUnknownBlockType */)arg1;
- (void)updateShortcutsVocabularyWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)validateVoiceShortcutPhrases:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)describeSyncStateIncludingDeleted:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
- (void)requestSyncToWatchWithForceReset:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)addVoiceShortcut:(id)arg1 phrase:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getVoiceShortcutsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getVoiceShortcutWithPhrase:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getNumberOfVoiceShortcutsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithVoiceShortcutManager:(id)arg1 coreDuetListener:(id)arg2 accessSpecifier:(id)arg3 syncDataHandlers:(id)arg4;

@end
