//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRTextDetector : NSObject
{
    _Bool _shouldCancel;
}

@property _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)detectTextInImage:(id)arg1 logIntermediateDetectorResult:(id *)arg2 options:(id)arg3;
- (id)charLevelNMSDetectFutharkTextInImage:(id)arg1 logIntermediateDetectorResult:(id *)arg2 options:(id)arg3;
- (id)charLevelNMSDetectTextInImage:(id)arg1 logIntermediateDetectorResult:(id *)arg2 options:(id)arg3;
- (unsigned long long)numScalesForImage:(id)arg1 options:(id)arg2;
- (id)detectCITextFeaturesInImage:(id)arg1 withThresholdingAlgorithm:(long long)arg2 options:(id)arg3;
- (id)detectCITextFeaturesInImage:(id)arg1 options:(id)arg2;
- (id)generateOutputFeatures:(vector_7d154506 *)arg1 forImageSize:(Size__ffdea654)arg2 withIncludedCandidates:(const vector_a7cf9eda *)arg3 options:(id)arg4;
- (_Bool)filterTextLines:(vector_7d154506 *)arg1 withIncludedCandidates:(vector_a7cf9eda *)arg2 options:(id)arg3;
- (_Bool)regroupTextLinesForChinese:(vector_7d154506 *)arg1 withIncludedCandidates:(const vector_a7cf9eda *)arg2 options:(id)arg3;
- (_Bool)formInitialTextLines:(struct Document *)arg1 withIncludedCandidates:(vector_a7cf9eda *)arg2 options:(id)arg3;
- (_Bool)detectTextCandidatesInImage:(id)arg1 atScale:(long long)arg2 forNumScales:(long long)arg3 toDocument:(struct Document *)arg4 options:(id)arg5;
- (id)init;

@end
