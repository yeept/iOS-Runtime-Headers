/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactGridViewController : UICollectionViewController <CNAvatarViewDelegate, CNContactDataSourceDelegate, CNQuickActionsViewDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _avatarMargins;
    struct CGSize { 
        float width; 
        float height; 
    } _avatarSize;
    UIColor *_backgroundColor;
    CNContactFormatter *_contactFormatter;
    NSObject<CNContactDataSource> *_dataSource;
    <CNContactGridViewControllerDelegate> *_delegate;
    CNContactGridViewLayout *_gridLayout;
    NSArray *_inlineActionsCategories;
    BOOL _inlineActionsEnabled;
    int _monogrammerStyle;
    NSDictionary *_nameTextAttributes;
    int _numberOfColumns;
    NSMutableDictionary *_preloadedActionsManagers;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } avatarMargins;
@property (nonatomic) struct CGSize { float x1; float x2; } avatarSize;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) NSObject<CNContactDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNKeyDescriptor> *descriptorForRequiredKeys;
@property (retain) CNContactGridViewLayout *gridLayout;
@property (readonly) unsigned int hash;
@property (nonatomic) int indexOfContactWithExpandedInlineActions;
@property (copy) NSIndexPath *indexPathOfContactWithExpandedInlineActions;
@property (nonatomic, copy) NSArray *inlineActionsCategories;
@property (nonatomic) BOOL inlineActionsEnabled;
@property (nonatomic) int monogrammerStyle;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic) int numberOfColumns;
@property (nonatomic, retain) NSMutableDictionary *preloadedActionsManagers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1;
- (id)_contactAtIndexPath:(id)arg1;
- (int)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(int)arg1;
- (void)_updateItemSize;
- (void)actionsView:(id)arg1 didPerformAction:(id)arg2;
- (void)actionsView:(id)arg1 willShowActions:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })avatarMargins;
- (struct CGSize { float x1; float x2; })avatarSize;
- (void)avatarView:(id)arg1 willShowActions:(id)arg2;
- (id)backgroundColor;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)contactDataSourceDidChange:(id)arg1;
- (id)contactFormatter;
- (id)dataSource;
- (id)delegate;
- (id)descriptorForRequiredKeys;
- (id)gridLayout;
- (int)indexOfContactWithExpandedInlineActions;
- (id)indexPathOfContactWithExpandedInlineActions;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inlineActionsCategories;
- (BOOL)inlineActionsEnabled;
- (int)monogrammerStyle;
- (id)nameTextAttributes;
- (int)numberOfColumns;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)preloadInlineActionsForContactsAtIndexes:(id)arg1;
- (id)preloadedActionsManagers;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setAvatarMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setAvatarSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGridLayout:(id)arg1;
- (void)setIndexOfContactWithExpandedInlineActions:(int)arg1;
- (void)setIndexOfContactWithExpandedInlineActions:(int)arg1 animated:(BOOL)arg2;
- (void)setIndexPathOfContactWithExpandedInlineActions:(id)arg1;
- (void)setIndexPathOfContactWithExpandedInlineActions:(id)arg1 animated:(BOOL)arg2;
- (void)setInlineActionsCategories:(id)arg1;
- (void)setInlineActionsEnabled:(BOOL)arg1;
- (void)setMonogrammerStyle:(int)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setNumberOfColumns:(int)arg1;
- (void)setPreloadedActionsManagers:(id)arg1;
- (id)viewControllerForActionsView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
