//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSObject, NSString;
@protocol PXAccessibilityView, PXDisplayAsset;

@protocol PXGAccessibilityContentInfo 
@property(readonly, nonatomic) NSArray *px_accessibilityChildren;
@property(readonly, nonatomic) _Bool visible;
@property(readonly, copy, nonatomic) NSArray *selectedContent;
@property(readonly, nonatomic) _Bool selected;
@property(readonly, nonatomic) NSObject<PXAccessibilityView> *view;
@property(readonly, nonatomic) id <PXDisplayAsset> asset;
@property(readonly, nonatomic) NSString *imageName;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) long long contentKind;
@property(readonly, nonatomic) struct CGRect frame;
@end
