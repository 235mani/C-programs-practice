import smtplib

mail=smtplib.SMTP("smtp.gmail.com",587)

mail.starttls()
from_mail="tmanideep235@gmail.com"
from_mail_pwd="manipwd235"
to_mail=["111manideep@gmail.com"]
mail.login(from_mail,from_mail_pwd)

subject="python mail"
message=f"{subject}msg me if you get mail (this is from python code)"

mail.sendmail(from_mail,to_mail,message)

print("mail sent successfully..........")
