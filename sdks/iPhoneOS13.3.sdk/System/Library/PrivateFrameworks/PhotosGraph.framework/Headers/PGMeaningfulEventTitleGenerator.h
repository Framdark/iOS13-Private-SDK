//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class NSString;

@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator
{
    NSString *_meaningLabel;
    BOOL _meaningIsReliable;
}

// - (void).cxx_destruct;
- (id)_timeTitle;
- (id)_meaningLabelForTitle;
- (id)_title;
- (void)_generateTitleAndSubtitleWithResult:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(BOOL)arg3;

@end

