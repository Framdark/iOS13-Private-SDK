//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFTitleCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, SFColor, SFImage, SFText;

@protocol SFDescriptionCardSection <SFTitleCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *richDescriptions;
@property(retain, nonatomic) SFImage *attributionGlyph;
@property(copy, nonatomic) NSURL *attributionURL;
@property(copy, nonatomic) NSString *attributionText;
@property(nonatomic) int textAlign;
@property(nonatomic) int imageAlign;
@property(nonatomic) BOOL descriptionExpand;
@property(copy, nonatomic) NSNumber *descriptionWeight;
@property(copy, nonatomic) NSNumber *descriptionSize;
@property(copy, nonatomic) NSNumber *titleWeight;
@property(nonatomic) BOOL titleNoWrap;
@property(retain, nonatomic) SFImage *image;
@property(copy, nonatomic) NSString *expandText;
@property(retain, nonatomic) SFText *descriptionText;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

