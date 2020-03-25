//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFInputParameterMigration : WFWorkflowMigration
{
}

+ (BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
- (void)migrateLegacyInputVariablesInParameterDictionary:(id)arg1 toVariable:(id)arg2;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inArray:(id)arg2 then:(id /* CDUnknownBlockType */)arg3;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inDictionary:(id)arg2 then:(id /* CDUnknownBlockType */)arg3;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inObject:(id)arg2 then:(id /* CDUnknownBlockType */)arg3;
- (id)findGetVariableActionProvidingInputToActionAtIndex:(long long)arg1 inWorkflow:(id)arg2;
- (id)findActionProvidingInputToActionAtIndex:(NSUInteger)arg1 inWorkflow:(id)arg2 reachedBeginning:(BOOL )arg3 inputActionIndex:(NSUInteger )arg4;
- (void)migrateWorkflow;

@end
