//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDOperation.h>

__attribute__((visibility("hidden")))
@interface DDTextKitOperation : DDOperation
{
    _NSRange _range;
    int _editCount;
}

@property _NSRange range; // @synthesize range=_range;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (BOOL)needsToStartOver;
- (BOOL)doURLificationOnDocument;
- (void)dispatchContainerModificationBlock:(id /* CDUnknownBlockType */)arg1;
- (_NSRange)_addResultsToAttributesInStorage:(id)arg1;
- (_NSRange)_addResultToAttributes:(id)arg1 inStorage:(id)arg2;
- (struct __DDScanQuery )_createScanQueryForBackend;
- (BOOL)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (void)textDidChange:(id)arg1;
- (void)cleanup;
- (id)initWithContainer:(id)arg1;

@end

