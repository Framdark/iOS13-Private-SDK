//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/SFMediaInfoCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFActionItem, SFColor, SFMediaItem, SFRichText;

@interface SFMediaInfoCardSection : SFCardSection <SFMediaInfoCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int isMediaContainer:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _isMediaContainer;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFMediaItem *_mediaItem;
    NSArray *_details;
    SFActionItem *_playAction;
    NSArray *_offers;
    NSString *_watchListIdentifier;
    NSString *_watchListButtonLabel;
    NSString *_watchListContinuationText;
    NSString *_watchListConfirmationText;
    SFRichText *_specialOfferButtonLabel;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SFRichText *specialOfferButtonLabel; // @synthesize specialOfferButtonLabel=_specialOfferButtonLabel;
@property(nonatomic) BOOL isMediaContainer; // @synthesize isMediaContainer=_isMediaContainer;
@property(copy, nonatomic) NSString *watchListConfirmationText; // @synthesize watchListConfirmationText=_watchListConfirmationText;
@property(copy, nonatomic) NSString *watchListContinuationText; // @synthesize watchListContinuationText=_watchListContinuationText;
@property(copy, nonatomic) NSString *watchListButtonLabel; // @synthesize watchListButtonLabel=_watchListButtonLabel;
@property(copy, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) SFActionItem *playAction; // @synthesize playAction=_playAction;
@property(copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) SFMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasIsMediaContainer;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

@end

