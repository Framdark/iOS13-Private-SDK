//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutDataSourceChangeDetails-Protocol.h>

@class NSIndexSet, PXArrayChangeDetails;

@protocol PXSectionedLayoutDataSourceChangeDetails <PXLayoutDataSourceChangeDetails>
@property(readonly, nonatomic) NSIndexSet *sectionsWithItemChanges;
@property(readonly, nonatomic) PXArrayChangeDetails *sectionChanges;
- (PXArrayChangeDetails *)itemChangesInSection:(long long)arg1;
@end

