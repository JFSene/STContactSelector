//
//  ViewController.h
//  CustomContactPicker
//
//  Created by synuity on 13/07/16.
//  Copyright © 2016 synuity. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ContactPickerViewController.h"
#import <MessageUI/MessageUI.h>
@interface ViewController : UIViewController<CustContactProtocol,MFMessageComposeViewControllerDelegate>
{
    NSArray *messageArray;
    
    
    }

@end

