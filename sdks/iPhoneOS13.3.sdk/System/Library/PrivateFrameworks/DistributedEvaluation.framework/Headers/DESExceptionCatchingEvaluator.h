//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DistributedEvaluation/DESRecipeEvaluation-Protocol.h>

@protocol DESRecipeEvaluation;

@interface DESExceptionCatchingEvaluator : NSObject <DESRecipeEvaluation>
{
    id <DESRecipeEvaluation> _evaluator;
}

+ (void)initialize;
// - (void).cxx_destruct;
- (void)performEvaluation:(id)arg1;
- (id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 binaryResult:(id )arg3 error:(id )arg4;
- (id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 error:(id )arg3;
- (id)serverSafeRecordInfoWithRecordInfo:(id)arg1;
- (BOOL)shouldDownloadAttachmentWithURL:(id)arg1 recipe:(id)arg2 recordInfo:(id)arg3;
- (id)telemetryWithRecordSet:(id)arg1;
- (id)evaluateRecipe:(id)arg1 recordInfo:(id)arg2 recordData:(id)arg3 attachments:(id)arg4 error:(id )arg5;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithEvaluator:(id)arg1;

@end
