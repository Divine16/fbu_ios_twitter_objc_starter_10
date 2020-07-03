//
//  TweetCellTableViewCell.h
//  twitter
//
//  Created by Divine Uchechukwu Linus on 6/30/20.
//  Copyright © 2018 Emerson Malca. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"

@interface TweetCellTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *username;
@property (weak, nonatomic) IBOutlet UILabel *retweetcount;
@property (weak, nonatomic) IBOutlet UILabel *favcount;
@property (weak, nonatomic) IBOutlet UILabel *textfield;
@property(strong,nonatomic) Tweet *tweet;
@property (weak, nonatomic) IBOutlet UIImageView *imagefield;
@property (weak, nonatomic) IBOutlet UIButton *likebutton;
@property (weak, nonatomic) IBOutlet UIButton *tweetbutton;
@property (weak, nonatomic) IBOutlet UILabel *datelabel;

@property int count;
-(void)setTweet:(Tweet *)tweet;
-(void) refreshdata;

@end
