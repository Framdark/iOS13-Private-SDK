//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRecipient.h>

@class MFComposeRecipient;

@interface PXMFComposeRecipient : PXRecipient
{
    MFComposeRecipient *_recipient;
}

@property(readonly, nonatomic) MFComposeRecipient *recipient; // @synthesize recipient=_recipient;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithRecipient:(id)arg1;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;

@end

