/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBContactContactsView.h"

@class NSMutableArray;

@interface WBContactAddressBookContactsView : WBContactContactsView
{
    NSMutableArray *realContacts;
}

- (id)contactsTableViewNoDataPrompt;
- (BOOL)tableViewHasData:(id)arg1;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)cancelSearching;
- (void)startSearching;
- (void)setSearchBarPlaceHolder;
- (void)copySearchDataSource;
- (Class)contactTableViewCellClass;
- (void)refreshContacts;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

